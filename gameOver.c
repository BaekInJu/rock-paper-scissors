#include <Windows.h>         //gotoxy
#include <stdio.h>            //printf

void gameOver(int win, int draw, int lose) {
	gotoxy(33, 14);
	printf("Game Over\n");
	gotoxy(33, 15);
	printf("����� %d�� %d�� %d�� �Դϴ�.\n", win, draw, lose);
}