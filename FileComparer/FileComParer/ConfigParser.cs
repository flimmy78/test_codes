using System;
using System.Collections.Generic;
using System.Text;
using System.Xml;
using System.IO;
using System.Windows.Forms;
using System.Drawing;


//using MS.Internal.Mita.Foundation;

namespace FileComparer
{
    public static class GlobalVar
    {
        public static string UseDllName         = "BaseFactory.dll";
        public static string StartBtn_start     = "Start";
        public static string StartBtn_stop      = "Stop";
        public static string StressBtn_start    = "Stress On";
        public static string StressBtn_stop     = "Stress Off";

        public static string VolumeIDsSeparator = "__###__";
        public static string VolumeAllIDs       = "All";
    };

    public static class MessageTypes
    {
        public static string DirectCallBack     = "DirectCallBack";
        public static string DestroyBaseFactory = "DestroyBaseFactory";

        public static string MessageAttibuteMessageTypeName = "MessageType";
        public static string MessageAttibuteSplitSign       = "=";
        public static string MessageSplitSign = ",..,";

        public static string MessageAttibuteTabName         = "tabName";

        public static string UniIDColumnName = "RowRefIndex";

        //----------------------to service.
        public static string LoadAllVolumeIDs       = "LoadAllVolumeIDs";
        public static string SetLoadVolume          = "SetLoadVolume";
        public static string UpdateSelectCondition  = "UpdateSelectCondition";  //condition string.
        public static string ShowMoreItems          = "ShowMoreItems";
        public static string SortShowItems          = "SortShowItems";   //column name.
        public static string GetSameFileAllPaths    = "GetSameFileAllPaths";   // split by ';'
        public static string CancelLoadVolume       = "CancelLoadVolume";

        //----------------------to ui.
        public static string ShowStatusMessage      = "ShowStatusMessage";
        public static string VolumeIDsUpdate        = "VolumeIDsUpdate";
        public static string FileListItemClear      = "FileListItemClear";
        public static string FileListItemAdd        = "FileListItemAdd";
        public static string FileListItemUpdate     = "FileListItemUpdate";
        public static string FileListItemRemove     = "FileListItemRemove";
        public static string ShowSameFileAllPaths   = "ShowSameFileAllPaths";
        public static string UpdateShowedNums       = "UpdateShowedNums";   //;value=10/200
        public static string UpdateLoadingRate      = "UpdateLoadingRate";  //like:loadingRate=%d,.., volume=%s

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
        public static string tableBackgroundColor = "tableBackgroundColor";
        public static string columnHeadersBackColor = "columnHeadersBackColor";
        public static string rowsBackColor = "rowsBackColor";
        public static string rowMouseMoveBackColor = "rowMouseMoveBackColor";
        public static string rowMouseLeaveBackColor = "rowMouseLeaveBackColor";
        
        public string m_tableBackgroundColor = ConfigParser.defaultBackColor;
        public string m_columnHeadersBackColor = ConfigParser.defaultBackColor;
        public string m_rowsBackColor = ConfigParser.defaultBackColor;
        public string m_rowMouseMoveBackColor = ConfigParser.defaultBackColor;
        public string m_rowMouseLeaveBackColor = ConfigParser.defaultBackColor;

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
        public static string tabPageBackColor = "tabPageBackColor";
        public static string selectConditionBackColor = "selectConditionBackColor";
        public static string showCountLabelBackColor = "showCountLabelBackColor";

        public string m_tabPageBackColor = ConfigParser.defaultBackColor;
        public string m_selectConditionBackColor = ConfigParser.defaultBackColor;
        public string m_showCountLabelBackColor = ConfigParser.defaultBackColor;

        public List<TabArea> m_tabs = new List<TabArea>();
        public DataArea()
        {
            m_tabs.Clear();
        }
    };

    class ConfigParser
    {
        public static string AppTitle = "show_title";
        public static string VolumeSelectLabel = "volume_select_label";
        public static string ReloadVolumeLabel = "reload_volume_label";
        public static string defaultBackColor = "white";
        public static string mainFormBackColor = "mainFormBackColor";
        public static string volumeLabelBackColor = "volumeLabelBackColor";
        public static string volumeSelectBackColor = "volumeSelectBackColor";
        public static string volumeloadingButtonBackColor = "volumeloadingButtonBackColor";

        string  m_configPath;
        string  m_parseContent;
        bool    m_parsedOk;
        XmlReader m_xmlReader;

        Dictionary<string, string> m_paras = null;
        DataArea m_dataArea;
        
        public ConfigParser()
        {
            m_configPath = "";
            m_parseContent = "";
            m_parsedOk = false;

            m_paras = new Dictionary<string, string>();
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
                        if ("data_area" == m_xmlReader.Name)
                        {
                            parseDataArea();
                        }
                        else
                        {
                            parseSpecialNode(m_xmlReader.Name);
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
        private bool parseSpecialNode(string nodeName)
        {
            string value = "";
            if (m_xmlReader.HasAttributes)
            {
                value = tryGetAttribute("value");
            }
            if ("" == value)
            {
                m_xmlReader.Read();
                if (XmlNodeType.Text == m_xmlReader.NodeType)
                {
                    value = m_xmlReader.Value;
                }
            }
            m_paras[nodeName] = value;
            return true;
        }
        
        private bool parseDataArea()
        {
            m_dataArea = new DataArea();
            m_dataArea.m_tabPageBackColor = tryGetAttribute(DataArea.tabPageBackColor, ConfigParser.defaultBackColor);
            m_dataArea.m_selectConditionBackColor = tryGetAttribute(DataArea.selectConditionBackColor, ConfigParser.defaultBackColor);
            m_dataArea.m_showCountLabelBackColor = tryGetAttribute(DataArea.showCountLabelBackColor, ConfigParser.defaultBackColor);

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
            dt.m_tableBackgroundColor = tryGetAttribute(DataTable.tableBackgroundColor, ConfigParser.defaultBackColor);
            dt.m_columnHeadersBackColor = tryGetAttribute(DataTable.columnHeadersBackColor, ConfigParser.defaultBackColor);
            dt.m_rowsBackColor = tryGetAttribute(DataTable.rowsBackColor, ConfigParser.defaultBackColor);
            dt.m_rowMouseMoveBackColor = tryGetAttribute(DataTable.rowMouseMoveBackColor, ConfigParser.defaultBackColor);
            dt.m_rowMouseLeaveBackColor = tryGetAttribute(DataTable.rowMouseLeaveBackColor, ConfigParser.defaultBackColor);

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
        private string tryGetAttribute(string name, string defaultValue)
        {
            try
            {
                string value = m_xmlReader.GetAttribute(name);
                if (null != value)
                    return value;
            }
            catch (System.ArgumentOutOfRangeException)
            {
            }
            return defaultValue;
        }

        private string tryGetAttribute(string name)
        {
            return tryGetAttribute(name, "");
        }

        public string getSpecialPara(string paraName, string defaultValue)
        {
            if (m_parsedOk && m_paras.ContainsKey(paraName))
            {
                return m_paras[paraName];
            }
            return defaultValue;
        }

        public DataArea readDataArea()
        {
            if (m_parsedOk)
            {
                return m_dataArea;
            }
            return new DataArea();
        }

        public static Color getConfigParaColor(string paraName)
        {
            Color retColor = Color.Red;
            retColor = Color.FromName(paraName);
            return retColor;
        }
    }
}
