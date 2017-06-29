#include <Windows.h>
#include <vector>

using namespace std;
void clearconsole(HANDLE wHnd) {
	CHAR_INFO consolebuffer[90 * 30];
	for (int x = 0; x < 90; ++x) {
		for (int y = 0; y < 30; ++y) {
			consolebuffer[x + 90 * y].Char.AsciiChar = ' ';
			consolebuffer[x + 90 * y].Attributes = FOREGROUND_INTENSITY;
		}
	}
	COORD characterPos = { 0,0 };
	COORD charBufSize = { 90, 30 };
	SMALL_RECT writeArea = { 0, 0, 89, 29 };
	COORD cursor = { 0, 0 };

	if (!WriteConsoleOutputA(wHnd, consolebuffer, charBufSize, characterPos, &writeArea)) {
		MessageBox(NULL, TEXT("You fucked up somewhere"), TEXT("Console Error"), MB_OK);
	}
	SetConsoleCursorPosition(wHnd, cursor);
}


