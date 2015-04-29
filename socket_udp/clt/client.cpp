#include <winsock2.h>
#include <stdio.h>
#include <windows.h>
#pragma comment(lib, "ws2_32.lib")


#define BUFLEN 512
#define NPACK 10
#define PORT 162

void diep(char *s)
{
  perror(s);
  exit(1);
}


int main(int argc, char* argv[]){
	//�ж��Ƿ�������IP��ַ�Ͷ˿ں�
	if(argc!=3){
		printf("Usage: %s IPAddress PortNumber\n",argv[0]);
		exit(-1);
	}
	//���ַ�����IP��ַת��Ϊu_long
	unsigned long ip;
	if((ip = inet_addr(argv[1])) == INADDR_NONE){
		printf("���Ϸ���IP��ַ��%s",argv[1]);
		exit(-1);
	}
	//�Ѷ˿ں�ת��������
	short port;
	if((port = atoi(argv[2]))==0){
		printf("�˿ں�����");
		exit(-1);
	}
	printf("Connecting to %s:%d......\n",inet_ntoa(*(in_addr*)&ip), port);
	WSADATA wsa;
	//��ʼ���׽���DLL
	if(WSAStartup(MAKEWORD(2,2), &wsa) != 0){
		printf("�׽��ֳ�ʼ��ʧ��!");
		exit(-1);
	}

	struct sockaddr_in si_other;
	int s, i, slen=sizeof(si_other);
	char buf[BUFLEN];

	if ((s=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)
		diep("socket");

	memset((char *) &si_other, 0, sizeof(si_other));
    si_other.sin_family = AF_INET;
    si_other.sin_port = htons(PORT);
    si_other.sin_addr.S_un.S_addr = inet_addr("192.168.253.124");


	while(1){
		printf(">");
		//�ӿ���̨��ȡһ������
		gets(buf);
		//���͸�������
		if (sendto(s, buf, BUFLEN, 0, (struct sockaddr *)&si_other, slen)==-1)
           diep("sendto()");

		struct sockaddr_in cc_other;

		//if (recvfrom(s, buf, BUFLEN, 0, (struct sockaddr *)&cc_other, &slen)==-1)
			  //diep("recvfrom()");

		printf("Message from %s: %s\n", inet_ntoa(cc_other.sin_addr), buf);
	}

	//�����׽���ռ�õ���Դ
	WSACleanup();
	return 0;
}