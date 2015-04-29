//Server.cpp
#include <winsock2.h>
#include <stdio.h>
#include <windows.h>
#pragma comment(lib, "ws2_32.lib")

#define BUFLEN 512
#define NPACK 10
#define PORT 9930


static int g_client_ct = 0;

void diep(char *s)
{
  perror(s);
  exit(1);
}

int main(int argc, char* argv[]){
	//�ж��Ƿ������˶˿ں�
	if(argc!=2){
		printf("Usage: %s PortNumber\n",argv[0]);
		exit(-1);
	}
	//�Ѷ˿ں�ת��������
	short port = 5555;
	if((port = atoi(argv[1]))==0){
		printf("�˿ں�����");
		exit(-1);
	}
	WSADATA wsa;
	//��ʼ���׽���DLL
	if(WSAStartup(MAKEWORD(2,2), &wsa)!=0){
		printf("�׽��ֳ�ʼ��ʧ��!");
		exit(-1);
	}
	{
		  struct sockaddr_in si_me, si_other;
		  int s, i, slen=sizeof(si_other);
		  char buf[BUFLEN];

		  if ((s=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)
			diep("socket");

		  memset((char *) &si_me, 0, sizeof(si_me));
		  si_me.sin_family = AF_INET;
		  si_me.sin_port = htons(PORT);
		  si_me.sin_addr.s_addr = htonl(INADDR_ANY);

		  if (bind(s, (struct sockaddr *)&si_me, sizeof(si_me))==-1)
			  diep("bind");

		  for (i=0; i<NPACK; i++) {
			if (recvfrom(s, buf, BUFLEN, 0, (struct sockaddr *)&si_other, &slen)==-1)
			  diep("recvfrom()");
			printf("Received packet from %s:%d\nData: %s\n\n", 
				   inet_ntoa(si_other.sin_addr), ntohs(si_other.sin_port), buf);

			if (sendto(s, buf, BUFLEN, 0, (struct sockaddr *)&si_other, slen)==-1)
				diep("sendto()");
		  }

		  closesocket(s);
	}

	//�����׽���ռ�õ���Դ
	WSACleanup();
	return 0;
}