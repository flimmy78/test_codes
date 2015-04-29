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
	//判断是否输入了IP地址和端口号
	if(argc!=3){
		printf("Usage: %s IPAddress PortNumber\n",argv[0]);
		exit(-1);
	}
	//把字符串的IP地址转化为u_long
	unsigned long ip;
	if((ip = inet_addr(argv[1])) == INADDR_NONE){
		printf("不合法的IP地址：%s",argv[1]);
		exit(-1);
	}
	//把端口号转化成整数
	short port;
	if((port = atoi(argv[2]))==0){
		printf("端口号有误！");
		exit(-1);
	}
	printf("Connecting to %s:%d......\n",inet_ntoa(*(in_addr*)&ip), port);
	WSADATA wsa;
	//初始化套接字DLL
	if(WSAStartup(MAKEWORD(2,2), &wsa) != 0){
		printf("套接字初始化失败!");
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
		//从控制台读取一行数据
		gets(buf);
		//发送给服务器
		if (sendto(s, buf, BUFLEN, 0, (struct sockaddr *)&si_other, slen)==-1)
           diep("sendto()");

		struct sockaddr_in cc_other;

		//if (recvfrom(s, buf, BUFLEN, 0, (struct sockaddr *)&cc_other, &slen)==-1)
			  //diep("recvfrom()");

		printf("Message from %s: %s\n", inet_ntoa(cc_other.sin_addr), buf);
	}

	//清理套接字占用的资源
	WSACleanup();
	return 0;
}