//Server.cpp
#include <winsock2.h>
#include <stdio.h>
#include <windows.h>
#pragma comment(lib, "ws2_32.lib")

static int g_client_ct = 0;
DWORD WINAPI myThread(void* ptr) 
{
	int num = ++g_client_ct;
	char buf[100];
	SOCKET clientSocket = *(SOCKET*)ptr;
	printf("Message from %d\n", num);
	while(1){
		//��������
		int bytes;
		if((bytes = recv(clientSocket, buf, sizeof(buf) - 1, 0)) == SOCKET_ERROR){
			printf("��������ʧ��!\n");
			exit(-1);
		}
		buf[bytes]='\0';

		printf("Message from %d: %s\n", num, buf);

		struct sockaddr_in sin, peerAdds;
		int localPort, peerPort;
		int addrlen = sizeof(sin);
		if(getsockname(clientSocket, (struct sockaddr *)&sin, &addrlen) == 0 &&
		   sin.sin_family == AF_INET && addrlen == sizeof(sin))
		{
			localPort = ntohs(sin.sin_port);
		}
		else
			; // handle error

		if(getpeername(clientSocket, (struct sockaddr *)&peerAdds, &addrlen) == 0 &&
		   peerAdds.sin_family == AF_INET && addrlen == sizeof(peerAdds))
		{
			peerPort = ntohs(peerAdds.sin_port);
		}
		else
			; // handle error

		printf("local port:%d, peer port:%d\n", localPort, peerPort);

		if ('q' == buf[0])
			break;

		if(send(clientSocket, buf, bytes, 0) == SOCKET_ERROR){
			printf("��������ʧ�ܣ�");
			break;
		}
	}
	closesocket(clientSocket);
	return 0; 
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
	//�����׽���
	SOCKET serverSocket;
	if((serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == INVALID_SOCKET){
		printf("�����׽���ʧ�ܣ�");
		exit(-1);
	}
	struct sockaddr_in serverAddress;
	memset(&serverAddress, 0 ,sizeof(sockaddr_in));
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	serverAddress.sin_port = htons(port);
	//��
	if(bind(serverSocket, (sockaddr*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR){
		printf("�׽��ְ󶨵��˿�ʧ�ܣ��˿�: %d\n",port);
		exit(-1);
	}
	//��������״̬
	if(listen(serverSocket, SOMAXCONN) == SOCKET_ERROR){
		printf("����ʧ�ܣ�");
		exit(-1);
	}
	printf("Server %d is listening......\n", port);

	while (true)
	{
		SOCKET clientSocket;//�����Ϳͻ���ͨ�ŵ��׽���
		struct sockaddr_in clientAddress;//�����Ϳͻ���ͨ�ŵ��׽��ֵ�ַ
		memset(&clientAddress, 0, sizeof(clientAddress));
		int addrlen = sizeof(clientAddress);
		//��������
		if((clientSocket = accept(serverSocket, (sockaddr*)&clientAddress, &addrlen)) == INVALID_SOCKET){
			printf("���ܿͻ�������ʧ�ܣ�");
			exit(-1);
		}
		printf("Accept connection from %s\n", inet_ntoa(clientAddress.sin_addr));
		
		SOCKET* clt_s = new SOCKET;
		*clt_s = clientSocket;

		CreateThread( 
			NULL,
			0, 
			(DWORD (WINAPI *)(void*))myThread, 
			(void*)clt_s,
			0, 
			NULL   );
	}
	//�����׽���ռ�õ���Դ
	WSACleanup();
	return 0;
}