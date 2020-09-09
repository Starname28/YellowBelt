#include "MyForm.h"
//#include "Client.h"
#pragma comment(lib, "ws2_32.lib")

#include <winsock2.h>
#include <iostream>
#include <vector>
#include <map>
#include <functional>
#include <ctime>
#include <Windows.h>
#pragma warning(disable: 4996)

using namespace Project2;

SOCKET Connection;


void ClientHandler() {
	char msg[256];
	//MyForm::box(100);
	while (true) {
		recv(Connection, msg, sizeof(msg), NULL);
		MyForm::box(atoi(msg));
		//MyForm::box(110);
		std::cout << msg << std::endl;
		
	}
}


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	/*Client client;
	client.Send();*/
	//WSAStartup
	WSAData wsaData;
	WORD DLLVersion = MAKEWORD(2, 1);
	if (WSAStartup(DLLVersion, &wsaData) != 0) {
		std::cout << "Error" << std::endl;
		exit(1);
	}

	SOCKADDR_IN addr;
	int sizeofaddr = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(1111);
	addr.sin_family = AF_INET;

	Connection = socket(AF_INET, SOCK_STREAM, NULL);
	if (connect(Connection, (SOCKADDR*)&addr, sizeof(addr)) != 0) {
		std::cout << "Error: failed connect to server.\n";
		return 1;
	}
	std::cout << "Connected!\n";

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::MyForm form;
	send(Connection, Project2::MyForm::MyArr::ch, sizeof(int), NULL);

	Application::Run(% form);
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ClientHandler,NULL, NULL, NULL);
	
	char msg1[256];

	while (true) {
		//std::cin.getline(msg1, sizeof(msg1));
		//msg1[0] = '1';
	
		//Application::Run(% form1);
		
		//if(Project2::IsOpen == true)
		//if(form.IsDisposed())
			send(Connection, Project2::MyForm::MyArr::ch, sizeof(int), NULL);
	
		Sleep(10);
	}

	return 0;
}