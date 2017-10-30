/*
 *  COPYRIGHT NOTICE
 *  Copyright (c) 2015, Douyu Network Technology Co., Ltd. in Wuhan
 *  All rights reserved.
 *
 *  @version : 1.0
 *  @author : mxl
 *  @E-mail：xiaolongicx@gmail.com
 *  @date : 2015/5/19
 *
 *  Revision Notes :
*/

#include "stdafx.h"
#include "data_def.h"
#include "dy_barrage_client.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>

#ifdef _MSC_VER
#define WINVER 0x0500
#include "windows.h"
#include <map>
#pragma comment(lib,"User32.lib")
#pragma comment(lib, "ws2_32.lib")

#else
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>
#endif

using namespace std;

#define MAX_DATA_SIZE 40960   //maximum length(bytes) of each reception

keyinput::keyinput()
{
}
keyinput::~keyinput()
{
}
void keyinput::key(string input) {

	HWND Hwnd;
	Hwnd = FindWindow(TEXT("GxWindowClass"), NULL);
	if (Hwnd)
	{
		SetForegroundWindow(Hwnd);

		Sleep(100);

		
		if (input == "!1")
		{
			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 49;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!2")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 50;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!3")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 51;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!4")
		{
			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 52;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!5")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 53;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!6")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 54;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!7")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 55;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!8")
		{
			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 56;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!9")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 57;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!0")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 48;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!a")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 65;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));

		}
		else if (input == "!b")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 66;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!c")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 67;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!d")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 68;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!e")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 69;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!f")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 70;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!g")
		{
			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 71;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!h")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 72;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!i")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 73;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!j")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 74;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!k")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 75;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!l")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 76;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!m")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 77;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!n")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 78;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!o")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 79;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!p")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 80;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!q")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 81;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!r")
		{
			INPUT key;
			    
			key.type = INPUT_KEYBOARD;
			key.ki.wVk = 82;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			    
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!s")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 83;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!t")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 84;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!u")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 85;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!v")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 86;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!w")
		{
			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 87;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!x")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 88;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!y")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 89;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!z")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = 90;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!回车")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_RETURN;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!tab")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_TAB;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == "!esc")
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_ESCAPE;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == string("!jump"))
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_SPACE;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == string("!f1"))
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_F1;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == string("!f2"))
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_F2;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == string("!f3"))
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_F3;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == string("!f4"))
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_F4;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == string("!f5"))
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_F5;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == string("!f7"))
		{

			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_F7;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		else if (input == string("!f8"))
		{
			INPUT key;

			// Set up a generic keyboard event.
			key.type = INPUT_KEYBOARD;
			key.ki.wScan = 0; // hardware scan code for key
			key.ki.time = 0;
			key.ki.dwExtraInfo = 0;

			key.ki.wVk = VK_F8;
			key.ki.dwFlags = 0;
			SendInput(1, &key, sizeof(INPUT));

			Sleep(300);
			key.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &key, sizeof(INPUT));
		}
		/*else if (input == "!Cc")
		{
			INPUT key[4];
			    
			key.type = key.type = key[2].type = key[3].type = INPUT_KEYBOARD;
			key.ki.wVk = key[2].ki.wVk = VK_CONTROL;
			key.ki.wVk = key[3].ki.wVk = 0x43;
			key[2].ki.dwFlags = key[3].ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(4, key, sizeof(INPUT));
		}*/
	}
	else
	{
		cout << "Not Found Windows" << endl;
	}
	
	
}

dy_barrage_client::dy_barrage_client()
{
}

dy_barrage_client::~dy_barrage_client()
{
}

int dy_barrage_client::connect_dy_server(const char *host_p, int port)
{
	struct hostent *host;

#ifdef _MSC_VER
	unsigned long lgIP = inet_addr(host_p);
	//输入的IP字符串
	if(lgIP != INADDR_NONE)
	{
		WSACleanup();
		return -1;
	}
	WSADATA wsaData;
	WSAStartup(MAKEWORD(1,1),&wsaData);
#endif

	host = gethostbyname(host_p);
	if(host == NULL)
	{
		cout << "gethostbyname err, host is" << host_p << endl;
		return -1;
	}

	sock_fd = socket(AF_INET, SOCK_STREAM, 0);
    if(sock_fd == -1)
    {
        cout << "create socket failed!" << endl;
        return -1;
    }

	struct sockaddr_in serv_addr;
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);
    serv_addr.sin_addr = *((struct in_addr *)host->h_addr);
    //bzero(&(serv_addr.sin_zero), 8);
	memset(serv_addr.sin_zero, 0, 8);

    int con_ret = connect(sock_fd, (struct sockaddr *)&serv_addr, sizeof(struct sockaddr));
    if(con_ret == -1)
    {
        cout << "connect server " << host_p << ":" << port << " err!" << endl;
        return -1;
    }
    else
    {
        cout << "connect server " << host_p << ":" << port << " ok" << endl;
    }
    return 0;
}

int dy_barrage_client::login_dy_room()
{
    int ret = 0;
    dy_login_req login_req;
    string data = login_req.transform_to_dy_string();

    //cout << data << endl;

    ret = send(sock_fd, data.data(), data.size(), 0);
    if(ret == -1)
    {
        cout << "send login request err: " << ret << endl;
    }
    else
    {
        cout << "send login request ok" << endl;
    }

    // receive login response
    get_dy_server_msg();

    return 0;
}

int dy_barrage_client::join_dy_room_group(int room_id, int group_id)
{
    int ret = 0;

    dy_join_group_req join_req(room_id, group_id);

    string data = join_req.transform_to_dy_string();

    ret = send(sock_fd, data.data(), data.size(), 0);
    if(ret == -1)
    {
        cout << "send join group request err: " << ret << endl;
    }
    else
    {
        cout << "send join group ok" << endl;
    }

    return 0;
}

void dy_barrage_client::get_dy_server_msg()
{
    int packet_length = 0;
    // get the packet length 4 bytes
    int recv_bytes = recv(sock_fd, reinterpret_cast<char *>(&packet_length), 4, 0);
    if (recv_bytes == -1)
    {
        cout << "receive server message err!" << endl;
        return;
    }

    if (packet_length <= 8)
    {
        return;
    }

    // get the packet body packet_length bytes
    char buf[MAX_DATA_SIZE] = {0};
    recv_bytes = recv(sock_fd, buf, packet_length, 0);
    if(recv_bytes == -1)
    {
        cout << "receive server message err!" << endl;
        return;
    }
    else
    {
        //you should better paste the packet as douyu packet header length, if not something unpredictable may happen
        string pack_data(buf, recv_bytes);
        int msg_type = get_dy_msg_type(pack_data);
        switch(msg_type)
        {
            case MSG_TYPE_LOGIN_RESPONSE:
                on_login_response(pack_data);
                break;
            case MSG_TYPE_BARRAGE:
                on_barrage(pack_data);
                break;
            // deal other server message as you need here
            default:
                break;
        }
    }
}

void dy_barrage_client::keep_alive()
{
#ifdef _MSC_VER
	dy_keep_alive_req keepl_req(GetTickCount());
#else
	dy_keep_alive_req keepl_req(time(NULL));
#endif


    string data = keepl_req.transform_to_dy_string();

    int ret = send(sock_fd, data.data(), data.size(), 0);
    if(ret == -1)
    {
        cout << "send keep alive request err: " << ret << endl;
    }


}

void dy_barrage_client::on_barrage(string data)
{

    dy_barrage_res barr_res;
    barr_res.parse_from_dy_string(data);
	string content = barr_res.content;
	keyinput keyinput;

	if (content.find("!", 0))
	{
		cout << barr_res.sender_name << ": " << content << endl;
	}
	else
	{
		keyinput.key(content);
		cout << barr_res.sender_name << string("发送了指令: ") << content << endl;
	}
}

void dy_barrage_client::on_login_response(string data)
{

    dy_login_res login_res;
    login_res.parse_from_dy_string(data);

    if (0 == login_res.ret)
    {
        cout << "login successfully" << endl;
    }
    else
    {
        cout << "login err: " << login_res.ret << endl;
    }
}


