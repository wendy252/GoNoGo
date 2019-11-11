#pragma once
#include <Windows.h>
#include <iostream>

class Arduino
{
public:
	Arduino(char portname[5]);
	void SendToArduino(bool PorF);
private:
	HANDLE hCom;
	DWORD dwBytesWrite;
	char out;
	char* lpOutBuffer;
	void SendPF();
};

