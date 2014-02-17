using System;
using System.Collections.Generic;
using System.Text;
using System.Xml;
using System.IO;
using System.Windows.Forms;


//using MS.Internal.Mita.Foundation;

namespace FileComParer
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

        public static string MessageAttibuteMessageTypeName = "MessageType";
        public static string MessageAttibuteSplitSign       = "=";
        public static string MessageSplitSign = ",";

        public static string MessageAttibuteTabName         = "tabName";

        public static string UniIDColumnName = "RowRefIndex";

        //----------------------to service.
        public static string LoadAllVolume          = "LoadAllVolume";
        public static string SetLoadVolume          = "SetLoadVolume";
        public static string UpdateSelectCondition  = "UpdateSelectCondition";  //condition string.
        public static string ShowMoreItems          = "ShowMoreItems";
        public static string SortShowItems          = "SortShowItems";   //column name.
        public static string GetSameFileAllPaths    = "GetSameFileAllPaths";   // split by ';'

        //----------------------to ui.
        public static string FileListItemClear  = "FileListItemClear";
        public static string FileListItemAdd    = "FileListItemAdd";
        public static string FileListItemUpdate = "FileListItemUpdate";
        public static string FileListItemRemove = "FileListItemRemove";
        public static string ShowSameFileAllPaths   = "ShowSameFileAllPaths";

        public static string getAttributeValue(string attrName, string msg)
        {
            int start = msg.IndexOf(attrName + MessageAttibuteSplitSign);
            if (start < 0)
            {
                return "";
            }
            start = start + attrName.Length + MessageAttibuteSplitSign.Length;

            string val = msg.Substring(start);
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
        public string m_tableName = "";
        public List<TableColumn> m_columns = new List<TableColumn>();
        public DataTable()
        {
            m_columns.Clear();
        }
    };
    class TabArea
    {
        public string m_tabName = "";
        public string m_displayName = "";
        public string m_selectTextBox = "";
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
        string m_loadVolumeName;
        DataArea m_dataArea;
        
        public ConfigParser()
        {
            m_configPath = "";
            m_parseContent = "";
            m_showTitle = "";
            m_loadVolumeName = "";
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
                        if ("load_disk_volume" == m_xmlReader.Name)
                        {
                            parseLoadVolume();
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
        private bool parseLoadVolume()
        {
            m_loadVolumeName = "";
            if (m_xmlReader.HasAttributes)
            {
                m_loadVolumeName = tryGetAttribute("value");
            }
            if ("" == m_loadVolumeName)
            {
                m_xmlReader.Read();
                if (XmlNodeType.Text == m_xmlReader.NodeType)
                {
                    m_loadVolumeName = m_xmlReader.Value;
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
            tabA.m_tabName = tryGetAttribute("tabName");
            tabA.m_displayName = tryGetAttribute("displayName");
            tabA.m_selectTextBox = tryGetAttribute("selectTextBox");

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
            dt.m_tableName = tryGetAttribute("tableName");

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
        public string readLoadVolume()
        {
            if (m_parsedOk)
            {
                return m_loadVolumeName;
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
