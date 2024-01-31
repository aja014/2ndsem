#pragma once
#include <Windows.h>

void coorxy(int x, int y) {
	_COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
