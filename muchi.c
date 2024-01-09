#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


void muchi(void) {
	int num = 0, user = 0, comp = 0;
	int win = 0, lose = 0, draw = 0, pan = 0;

	while (1) {
		system("cls");
		gotoxy(20, 1);
		printf("정수 입력(1.가위, 2.바위, 3.보, -1.종료) : ");
		scanf("%d", &user);
		if (user == -1) {
			gameOver(win, draw, lose);
			break;
		}
		else {
			userinfo(user);
			comp = cominfo();
			if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2)) {
				pan = 1;
				gotoxy(33, 15);
				printf("당신의 공격\n");
			}
			else if ((user == 1 && comp == 2) || (user == 2 && comp == 3) || (user == 3 && comp == 1)) {
				pan = 2;
				gotoxy(33, 15);
				printf("컴퓨터의 공격\n");
			}
			else if (user == comp) {
				if (pan == 1) {
					gotoxy(33, 15);
					printf("당신의 승리\n");
					win += 1;
					pan = 0;
				}
				else if (pan == 2) {
					gotoxy(33, 15);
					printf("컴퓨터의 승리\n");
					lose += 1;
					pan = 0;
				}
				else {
					gotoxy(33, 15);
					printf("비겼습니다. 다시\n");
				}
			}
				
			
		}
		system("pause");
		system("cls");
	}
}