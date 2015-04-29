using System;
using System.Collections.Generic;
using System.Text;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace Simulator104
{
    public delegate void DllCallBackHandler(string msgType, string msgContent);

    class DllCallBackProcessor
    {
        Form1    m_observerForm;
        private DllCallBackHandler m_dllCallBackHandler;

        public DllCallBackProcessor(Form1 observer)
        {
            m_observerForm = observer;
        }

        [DllImport("Iec104Lib.dll", EntryPoint = "initService", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.Winapi)]
        public static extern bool initService([In] IntPtr callback);
        [DllImport("Iec104Lib.dll", EntryPoint = "postMessageToService", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.Winapi)]
        public static extern bool postMessageToService(string msgType, string msgContent);

        public void registerToDll()
        {
            m_dllCallBackHandler = new DllCallBackHandler(this.handleDllCallBack);
            IntPtr ptr = Marshal.GetFunctionPointerForDelegate(m_dllCallBackHandler);
            initService(ptr);
            sendTestMessage(MessageTypes.ShowStatusMessage, "today is a nice day.");
        }

        public bool sendMessage(string msgType, string msgContent)
        {
            bool ret = true;
            try
            {
                postMessageToService(msgType, msgContent);
            }
            catch (Exception)
            {
                ret = false;
            }
            return ret;
        }

        public void handleDllCallBack(string msgType, string msgContent)
        {
            if (MessageTypes.DirectCallBack == msgType)
            {
                processTestMessage(msgContent);
            }
            else if (MessageTypes.ShowStatusMessage == msgType)
            {
                m_observerForm.updateStatusMessage(msgContent);
            }
            else 
            {
                m_observerForm.processDataAreaMessage(msgType, msgContent);
            }
        }

        public void unRegisterToDll()
        {
            sendMessage(MessageTypes.DestroyBaseFactory, "now");
        }

        public void sendTestMessage(string msgType, string msgContent)
        {
            string newContent = MessageTypes.MessageAttibuteMessageTypeName +
                MessageTypes.MessageAttibuteSplitSign +
                msgType + MessageTypes.MessageSplitSign + msgContent;

            sendMessage(MessageTypes.DirectCallBack, newContent);
        }

        private void processTestMessage(string msgContent)
        {
            string type = MessageTypes.getAttributeValue(
                MessageTypes.MessageAttibuteMessageTypeName, msgContent);

            int contentIdx = msgContent.IndexOf(MessageTypes.MessageSplitSign) +
                MessageTypes.MessageSplitSign.Length;

            handleDllCallBack(type, msgContent.Substring(contentIdx));            
        }

    }
}
