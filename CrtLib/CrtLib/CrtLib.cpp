#include "CrtLib.h"
#include "windows.h"

namespace crt
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	void GotoXY(int x, int y)
	{
		COORD cursorPosition{x,y};
		//cursorPosition.X = x;
		//cursorPosition.Y = y;
		SetConsoleCursorPosition(hStdOut, cursorPosition);
	}

	void SetTextColor(int color)
	{
		CONSOLE_SCREEN_BUFFER_INFO info;
		color = color & 0b0000000000001111; //0x0f
		GetConsoleScreenBufferInfo(hStdOut, &info);
		info.wAttributes = info.wAttributes & 0xf0; //0000000011110000
		info.wAttributes = info.wAttributes | color;
		SetConsoleTextAttribute(hStdOut, info.wAttributes);
	}

	void SetTextBackground(int color)
	{
		CONSOLE_SCREEN_BUFFER_INFO info;
		color = color & 0b0000000000001111; //0x0f
		GetConsoleScreenBufferInfo(hStdOut, &info);
		info.wAttributes = info.wAttributes & 0x0f; //0000000000001111
		color = color << 4; // 00001111 - > 11110000
		info.wAttributes = info.wAttributes | color;
		SetConsoleTextAttribute(hStdOut, info.wAttributes);
	}

	void SetCursorVisibility(bool visible)
	{
		CONSOLE_CURSOR_INFO info;
		GetConsoleCursorInfo(hStdOut, &info);
		info.bVisible = visible;
		SetConsoleCursorInfo(hStdOut, &info);
	}

	void HideCursor()
	{
		SetCursorVisibility(false);
	}

	void ShowCursor()
	{
		SetCursorVisibility(true);
	}
}


