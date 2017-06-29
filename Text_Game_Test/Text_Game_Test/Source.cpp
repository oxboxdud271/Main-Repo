//System/Built-in headers
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <string>

//User Defined Headers
#include "CommonT.h"

//Definitions
#define _WIN32_WINNT = 0x0601;  //Windows version. This is Windows 7 or later


HANDLE wHnd, rHnd;    // Handle to write to the console.    // Handle to read from the console.
CONSOLE_SCREEN_BUFFER_INFO cinfo; //A Windows API console structure containing info regarding the current console
COORD cursor; //The current position of the console cursor

void welcome(void);

//Note: Attempt to use main just init and use other functions to do everything else
int main(void) {   
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);  //Writing Handle
	rHnd = GetStdHandle(STD_INPUT_HANDLE);  //Reading Handle

    //Setting Screen
	CONST COORD buffSize = { 90, 30 };
	CONST SMALL_RECT windowSize = { 0, 0, 89, 29 };
	SetConsoleTitle(TEXT("WinAPI Practice"));
	if (!SetConsoleWindowInfo(wHnd, TRUE, &windowSize)) {
		MessageBox(NULL, TEXT("SetConsoleWindowInfo"), TEXT("COnsole Error"), MB_OK);
	}
	if (!SetConsoleScreenBufferSize(wHnd, buffSize)) {
		MessageBox(NULL, TEXT("SetConsoleScreenBufferSize"), TEXT("COnsole Error"), MB_OK);
	}
	//End Setting Screen
	welcome();
	while (true) {
		clearconsole(wHnd);
	}
}

void welcome(void) {
	LPSTR textString1 = "Welcome to first test of console";
	CHAR scBuffer[256];

	SetConsoleTextAttribute(wHnd, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	WriteFile(wHnd, textString1, lstrlenA(textString1), NULL, NULL);

	//Cursor Practice
	cursor = { 0, 29 };
	if (!SetConsoleCursorPosition(wHnd, cursor)) {
		MessageBox(NULL, TEXT("SetConsoleCursorPosition"), TEXT("COnsole Error"), MB_OK);
	}
	//ReadFile(rHnd, scBuffer, 255, NULL, NULL);
	//End Cursor Practice
}