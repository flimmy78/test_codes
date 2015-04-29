#ifndef _IEC104_DEF_H__
const int  _IEC104_DEF_H__
namespace IEC104
{
	const int  IEC104_STD_PORT 2404

	const int  IEC104_STD_T0=   30	//连接建立的超时
	const int  IEC104_STD_T1=   15 //发送或测试APDU的超时
	const int  IEC104_STD_T2=   10	//无数据报文（t2<t1)时确认的超时--发送S格式APDU
	const int  IEC104_STD_T3=   20

	const int  IEC104_STD_K=	12  //发送状态变量的最大不同接收序号
	const int  IEC104_STD_W=	8   //接受到w 个I格式APDU后的最后确认

	const int  IEC104_COT_LEN=  2 //传输原因长度
	const int  IEC104_IOA_LEN=  3 //信息体地址长度
	const int  IEC104_COA_LEN=  2 //公共地址长度

	//应用层数据类型定义
	const int  IEC104_FRAME_I=					1
	const int  IEC104_FRAME_S=					2
	const int  IEC104_FRAME_U_START_ACT=		3
	const int  IEC104_FRAME_U_START_CON=		4
	const int  IEC104_FRAME_U_STOP_ACT=			5
	const int  IEC104_FRAME_U_STOP_CON=			6
	const int  IEC104_FRAME_U_TEST_ACT=			7
	const int  IEC104_FRAME_U_TEST_CON=			8

	const int  IEC104_M_SP_NA=					1	//单点信息
	const int  IEC104_M_DP_NA=					3	//双点信息
	const int  IEC104_M_ST_NA=					5	//步位置信息
	const int  IEC104_M_BO_NA=					7	//32比特串
	const int  IEC104_M_ME_NA=					9	//测量值，规一化值
	const int  IEC104_M_ME_NB=					11	//测量值，标度化值
	const int  IEC104_M_ME_NC=					13	//测量值，短浮点数
	const int  IEC104_M_IT_NA=					15	//累计量
	const int  IEC104_M_SP_NB=					20	//具有状态变位捡出的成组单点信息 ????
	const int  IEC104_M_ME_ND=					21	//测量值，不带品质描述的规一化值
	const int  IEC104_M_SP_TB=					30	//带时标CP56Time2a的单点信息
	const int  IEC104_M_DP_TB=					31	//带时标CP56Time2a的双点信息
	const int  IEC104_M_ST_TB=					32	//带时标CP56Time2a的步位信息
	const int  IEC104_M_BO_TB=					33	//带时标CP56Time2a的32位串
	const int  IEC104_M_ME_TD=					34	//带时标CP56Time2a的规一化测量值
	const int  IEC104_M_ME_TE=					35	//测量值，带时标CP56Time2a的标度化值
	const int  IEC104_M_ME_TF=					36	//测量值，带时标CP56Time2a的短浮点数
	const int  IEC104_M_IT_TB=					37	//带时标CP56Time2a的累计量
	const int  IEC104_M_EP_TD=					38	//带时标CP56Time2a的继电保护事件
	const int  IEC104_M_EP_TE=					39	//带时标CP56Time2a的成组继电保护成组启动事件
	const int  IEC104_M_EP_TF=					40	//带时标CP56Time2a的继电保护成组输出电路信息

	//控制方向的系统信息
	const int  IEC104_C_SC_NA=					45	//单命令
	const int  IEC104_C_DC_NA=					46 // 双命令
	const int  IEC104_C_RC_NA=					47	//升降命令
	const int  IEC104_C_SE_NA=					48	//设点命令，规一化值
	const int  IEC104_C_SE_NB=					49	//设点命令，标度化值
	const int  IEC104_C_SE_NC=					50	//设点命令，短浮点数
	const int  IEC104_C_BO_NA=					51	//32比特串

	const int  IEC104_C_SC_TA=					58	//单命令，带时标
	const int  IEC104_C_DC_TA=					59 // 双命令，带时标
	const int  IEC104_C_RC_TA=					60	//升降命令，带时标
	const int  IEC104_C_SE_TA=					61	//设点命令，规一化值，带时标
	const int  IEC104_C_SE_TB=					62	//设点命令，标度化值，带时标
	const int  IEC104_C_SE_TC=					63	//设点命令，短浮点数，带时标
	const int  IEC104_C_BO_TA=					64	//32比特串 ，带时标

	//监视方向的系统信息
	const int  IEC104_M_EI_NA=					70	//初始化结束

	//控制方向的系统信息
	const int  IEC104_C_IC_NA=				100	//总召唤命令
	const int  IEC104_C_CI_NA=				101	//电能脉冲召唤命令
	const int  IEC104_C_RD_NA=				102	//读命令
	const int  IEC104_C_CS_NA=				103	//时钟同步命令
	const int  IEC104_C_RP_NA=				105 //复位进程命令
	const int  IEC104_C_TS_TA=				107 //带时标CP56Time2a的测试命令

	//控制方向的参数
	const int  IEC104_P_ME_NA=				110 //测量值参数，规一化值
	const int  IEC104_P_ME_NB=				111 //测量值参数，标度化值
	const int  IEC104_P_ME_NC=				112 //测量值参数，短浮点数
	const int  IEC104_P_NC_NA=				113 //参数激活

	//
	const int  IEC104_F_FR_NA=				120 //文件已准备好
	const int  IEC104_F_SR_NA=				121 //节已准备好
	const int  IEC104_F_SC_NA=				122 //召唤目录，选择文件，召唤文件，召唤节
	const int  IEC104_F_LS_NA=				123 //最后的节、最后的段
	const int  IEC104_F_AF_NA=				124 //确认文件，确认节
	const int  IEC104_F_SG_NA=				125 //段
	const int  IEC104_F_DR_NA=				126 //目录
}

#endif