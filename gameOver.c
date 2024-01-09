#include <Windows.h>         //gotoxy
#include <stdio.h>            //printf

void gameOver(int win, int draw, int lose) {
	gotoxy(33, 14);
	printf("Game Over\n");
	gotoxy(33, 15);
	printf("당신은 %d승 %d무 %d패 입니다.\n", win, draw, lose);
}