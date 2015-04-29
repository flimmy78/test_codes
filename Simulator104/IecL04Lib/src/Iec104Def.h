#ifndef _IEC104_DEF_H__
const int  _IEC104_DEF_H__
namespace IEC104
{
	const int  IEC104_STD_PORT 2404

	const int  IEC104_STD_T0=   30	//���ӽ����ĳ�ʱ
	const int  IEC104_STD_T1=   15 //���ͻ����APDU�ĳ�ʱ
	const int  IEC104_STD_T2=   10	//�����ݱ��ģ�t2<t1)ʱȷ�ϵĳ�ʱ--����S��ʽAPDU
	const int  IEC104_STD_T3=   20

	const int  IEC104_STD_K=	12  //����״̬���������ͬ�������
	const int  IEC104_STD_W=	8   //���ܵ�w ��I��ʽAPDU������ȷ��

	const int  IEC104_COT_LEN=  2 //����ԭ�򳤶�
	const int  IEC104_IOA_LEN=  3 //��Ϣ���ַ����
	const int  IEC104_COA_LEN=  2 //������ַ����

	//Ӧ�ò��������Ͷ���
	const int  IEC104_FRAME_I=					1
	const int  IEC104_FRAME_S=					2
	const int  IEC104_FRAME_U_START_ACT=		3
	const int  IEC104_FRAME_U_START_CON=		4
	const int  IEC104_FRAME_U_STOP_ACT=			5
	const int  IEC104_FRAME_U_STOP_CON=			6
	const int  IEC104_FRAME_U_TEST_ACT=			7
	const int  IEC104_FRAME_U_TEST_CON=			8

	const int  IEC104_M_SP_NA=					1	//������Ϣ
	const int  IEC104_M_DP_NA=					3	//˫����Ϣ
	const int  IEC104_M_ST_NA=					5	//��λ����Ϣ
	const int  IEC104_M_BO_NA=					7	//32���ش�
	const int  IEC104_M_ME_NA=					9	//����ֵ����һ��ֵ
	const int  IEC104_M_ME_NB=					11	//����ֵ����Ȼ�ֵ
	const int  IEC104_M_ME_NC=					13	//����ֵ���̸�����
	const int  IEC104_M_IT_NA=					15	//�ۼ���
	const int  IEC104_M_SP_NB=					20	//����״̬��λ����ĳ��鵥����Ϣ ????
	const int  IEC104_M_ME_ND=					21	//����ֵ������Ʒ�������Ĺ�һ��ֵ
	const int  IEC104_M_SP_TB=					30	//��ʱ��CP56Time2a�ĵ�����Ϣ
	const int  IEC104_M_DP_TB=					31	//��ʱ��CP56Time2a��˫����Ϣ
	const int  IEC104_M_ST_TB=					32	//��ʱ��CP56Time2a�Ĳ�λ��Ϣ
	const int  IEC104_M_BO_TB=					33	//��ʱ��CP56Time2a��32λ��
	const int  IEC104_M_ME_TD=					34	//��ʱ��CP56Time2a�Ĺ�һ������ֵ
	const int  IEC104_M_ME_TE=					35	//����ֵ����ʱ��CP56Time2a�ı�Ȼ�ֵ
	const int  IEC104_M_ME_TF=					36	//����ֵ����ʱ��CP56Time2a�Ķ̸�����
	const int  IEC104_M_IT_TB=					37	//��ʱ��CP56Time2a���ۼ���
	const int  IEC104_M_EP_TD=					38	//��ʱ��CP56Time2a�ļ̵籣���¼�
	const int  IEC104_M_EP_TE=					39	//��ʱ��CP56Time2a�ĳ���̵籣�����������¼�
	const int  IEC104_M_EP_TF=					40	//��ʱ��CP56Time2a�ļ̵籣�����������·��Ϣ

	//���Ʒ����ϵͳ��Ϣ
	const int  IEC104_C_SC_NA=					45	//������
	const int  IEC104_C_DC_NA=					46 // ˫����
	const int  IEC104_C_RC_NA=					47	//��������
	const int  IEC104_C_SE_NA=					48	//��������һ��ֵ
	const int  IEC104_C_SE_NB=					49	//��������Ȼ�ֵ
	const int  IEC104_C_SE_NC=					50	//�������̸�����
	const int  IEC104_C_BO_NA=					51	//32���ش�

	const int  IEC104_C_SC_TA=					58	//�������ʱ��
	const int  IEC104_C_DC_TA=					59 // ˫�����ʱ��
	const int  IEC104_C_RC_TA=					60	//���������ʱ��
	const int  IEC104_C_SE_TA=					61	//��������һ��ֵ����ʱ��
	const int  IEC104_C_SE_TB=					62	//��������Ȼ�ֵ����ʱ��
	const int  IEC104_C_SE_TC=					63	//�������̸���������ʱ��
	const int  IEC104_C_BO_TA=					64	//32���ش� ����ʱ��

	//���ӷ����ϵͳ��Ϣ
	const int  IEC104_M_EI_NA=					70	//��ʼ������

	//���Ʒ����ϵͳ��Ϣ
	const int  IEC104_C_IC_NA=				100	//���ٻ�����
	const int  IEC104_C_CI_NA=				101	//���������ٻ�����
	const int  IEC104_C_RD_NA=				102	//������
	const int  IEC104_C_CS_NA=				103	//ʱ��ͬ������
	const int  IEC104_C_RP_NA=				105 //��λ��������
	const int  IEC104_C_TS_TA=				107 //��ʱ��CP56Time2a�Ĳ�������

	//���Ʒ���Ĳ���
	const int  IEC104_P_ME_NA=				110 //����ֵ��������һ��ֵ
	const int  IEC104_P_ME_NB=				111 //����ֵ��������Ȼ�ֵ
	const int  IEC104_P_ME_NC=				112 //����ֵ�������̸�����
	const int  IEC104_P_NC_NA=				113 //��������

	//
	const int  IEC104_F_FR_NA=				120 //�ļ���׼����
	const int  IEC104_F_SR_NA=				121 //����׼����
	const int  IEC104_F_SC_NA=				122 //�ٻ�Ŀ¼��ѡ���ļ����ٻ��ļ����ٻ���
	const int  IEC104_F_LS_NA=				123 //���Ľڡ����Ķ�
	const int  IEC104_F_AF_NA=				124 //ȷ���ļ���ȷ�Ͻ�
	const int  IEC104_F_SG_NA=				125 //��
	const int  IEC104_F_DR_NA=				126 //Ŀ¼
}

#endif