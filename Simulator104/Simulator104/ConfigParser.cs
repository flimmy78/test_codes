using System;
using System.Collections.Generic;
using System.Text;
using System.Xml;
using System.IO;
using System.Windows.Forms;


//using MS.Internal.Mita.Foundation;

namespace Simulator104
{
    public static class GlobalVar
    {
        public static string UseDllName         = "BaseFactory.dll";
        public static string StartBtn_start     = "Start";
        public static string StartBtn_stop      = "Stop";
        public static string StressBtn_start    = "Stress On";
        public static string StressBtn_stop     = "Stress Off";
    };

    public static class MessageTypes
    {
        public static string DirectCallBack     = "DirectCallBack";
        public static string DestroyBaseFactory = "DestroyBaseFactory";
        public static string BaseFactoryStart   = "Start";
        public static string BaseFactoryStop    = "Stop";
        public static string BaseFactoryStressOn = "StressOn";
        public static string BaseFactoryStressOff = "StressOff";
        public static string ShowStatusMessage  = "ShowStatusMessage";

        public static string DataItemAdd    = "DataItemAdd";
        public static string DataItemUpdate = "DataItemUpdate";
        public static string DataItemRemove = "DataItemRemove";

        public static string MessageAttibuteMessageTypeName = "MessageType";
        public static string MessageAttibuteSplitSign       = "=";
        public static string MessageSplitSign = ",";

        public static string MessageAttibuteTabName         = "Type";

        public static string HideColumnName = "Pkey";

        public static string getAttributeValue(string attrName, string msg)
        {
            int start = msg.IndexOf(MessageSplitSign + attrName);
            if (start < 0)
            {
                start = msg.IndexOf(attrName);  //when the first place.
            }
            else
            {
                start = start + MessageSplitSign.Length;
            }
            if (MessageAttibuteSplitSign !=
                msg.Substring(start + attrName.Length, MessageAttibuteSplitSign.Length))
            {
                throw new ArgumentOutOfRangeException();
            }

            string val = msg.Substring(start + attrName.Length + MessageAttibuteSplitSign.Length);
            if (val.IndexOf(MessageSplitSign) >= 0)
            {
                val = val.Substring(0, val.IndexOf(MessageSplitSign));
            }
            return val;
        }

    };
    
    class TableColumn
    {
        public string m_name = "";
        public string m_dataType = "";
        public string m_width = "";
    };
    class DataTable
    {
        public List<TableColumn> m_columns = new List<TableColumn>();
        public DataTable()
        {
            m_columns.Clear();
        }
    };
    class TabArea
    {
        public string m_name = "";
        public DataTable m_table = new DataTable();
    };
    class DataArea
    {
        public List<TabArea> m_tabs = new List<TabArea>();
        public DataArea()
        {
            m_tabs.Clear();
        }
    };

    class ConfigParser
    {
        string  m_configPath;
        string  m_parseContent;
        bool    m_parsedOk;
        XmlReader m_xmlReader;
        string m_showTitle;
        DataArea m_dataArea;
        
        public ConfigParser()
        {
            m_configPath = "";
            m_parseContent = "";
            m_parsedOk = false;
        }
        public bool parseFile(string filePath)
        {
            m_parsedOk = false;
            m_configPath = filePath;
            if (!File.Exists(m_configPath))
            {
                MessageBox.Show("file:" + filePath + " not find!!");
                return false;
            }
            m_parseContent = File.ReadAllText(m_configPath);
            return this.parseString(m_parseContent);
        }
        public bool parseString(string str)
        {
            m_parsedOk = false;
            m_parseContent = str;
            m_xmlReader = XmlReader.Create(new StringReader(m_parseContent));
            while (m_xmlReader.Read())
            {
                switch (m_xmlReader.NodeType)
                {
                    case XmlNodeType.Element:
                        if ("show_title" == m_xmlReader.Name)
                        {
                            parseShowTitle();
                        }
                        if ("data_area" == m_xmlReader.Name)
                        {
                            parseDataArea();
                        }
                        break;
                    case XmlNodeType.Text:
                        break;
                    case XmlNodeType.XmlDeclaration:
                    case XmlNodeType.ProcessingInstruction:
                        //(reader.Name, reader.Value);
                        break;
                    case XmlNodeType.Comment:
                        //reader.Value
                        break;
                    case XmlNodeType.EndElement:
                        break;
                }
            }
            m_parsedOk = true;
            return m_parsedOk;
        }
        private bool parseShowTitle()
        {
            m_showTitle = "";
            if (m_xmlReader.HasAttributes)
            {
                m_showTitle = tryGetAttribute("value");
            }
            if ("" == m_showTitle)
            {
                m_xmlReader.Read();
                if (XmlNodeType.Text == m_xmlReader.NodeType)
                {
                    m_showTitle = m_xmlReader.Value;
                }
            }
            return true;
        }
        private bool parseDataArea()
        {
            m_dataArea = new DataArea();
            bool bContinue = true;
            while (bContinue)
            {
                switch (m_xmlReader.NodeType)
                {
                    case XmlNodeType.Element:
                        if ("tab_area" == m_xmlReader.Name)
                        {
                            parseTabArea();
                        }
                        break;
                    case XmlNodeType.EndElement:
                        if ("data_area" == m_xmlReader.Name)
                        {
                            bContinue = false;
                        }
                        break;

                    default:
                        break;
                }
                bContinue = bContinue && m_xmlReader.Read();
            }
            return true;
        }
        private bool parseTabArea()
        {
            TabArea tabA = new TabArea();
            m_dataArea.m_tabs.Add(tabA);
            tabA.m_name = tryGetAttribute("name");

            bool bContinue = true;
            while (bContinue)
            {
                switch (m_xmlReader.NodeType)
                {
                    case XmlNodeType.Element:
                        if ("data_table" == m_xmlReader.Name)
                        {
                            parseDataTable(tabA.m_table);
                        }
                        break;
                    case XmlNodeType.EndElement:
                        if ("tab_area" == m_xmlReader.Name)
                        {
                            bContinue = false;
                        }
                        break;

                    default:
                        break;
                }
                bContinue = bContinue && m_xmlReader.Read();
            }
            return true;
        }
        private bool parseDataTable(DataTable dt)
        {
            bool bContinue = true;
            while (bContinue)
            {
                switch (m_xmlReader.NodeType)
                {
                    case XmlNodeType.Element:
                        if ("column" == m_xmlReader.Name)
                        {
                            parseTableCol(dt);
                        }
                        break;
                    case XmlNodeType.EndElement:
                        if ("data_table" == m_xmlReader.Name)
                        {
                            bContinue = false;
                        }
                        break;

                    default:
                        break;
                }
                bContinue = bContinue && m_xmlReader.Read();
            }
            return true;
        }
        private bool parseTableCol(DataTable dt)
        {
            TableColumn col = new TableColumn();
            col.m_name = tryGetAttribute("name");
            col.m_dataType = tryGetAttribute("data_type");
            col.m_width = tryGetAttribute("width");
            dt.m_columns.Add(col);
            return true;
        }
        private string tryGetAttribute(string name)
        {
            try
            {
                return m_xmlReader.GetAttribute(name);
            }
            catch (System.ArgumentOutOfRangeException)
            {
            }
            return "";
        }
        public string readShowTitle()
        {
            if (m_parsedOk)
            {
                return m_showTitle;
            }
            return "";
        }
        public DataArea readDataArea()
        {
            if (m_parsedOk)
            {
                return m_dataArea;
            }
            return new DataArea();
        }
        public string readCommuArea()
        {
            if (m_parsedOk)
            {
                return m_showTitle;
            }
            return "";
        }
    }
}
