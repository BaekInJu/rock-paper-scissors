#pragma once          //�޸𸮿� ��� ������ �ߺ����� �ε����� �ʰڴ�.

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void gameOver(int win, int draw, int lose);  //�Լ� ����
void userinfo(int num);
int cominfo(void);
int compareWin(int user, int comp);
int compareLose(int user, int comp);
int compareDraw(int user, int comp);
void muchi(void);

