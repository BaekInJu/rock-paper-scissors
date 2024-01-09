#pragma once          //메모리에 헤더 파일을 중복으로 로드하지 않겠다.

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void gameOver(int win, int draw, int lose);  //함수 원형
void userinfo(int num);
int cominfo(void);
int compareWin(int user, int comp);
int compareLose(int user, int comp);
int compareDraw(int user, int comp);
void muchi(void);

