#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


void muchi(void) {
	int num = 0, user = 0, comp = 0;
	int win = 0, lose = 0, draw = 0, pan = 0;

	while (1) {
		system("cls");
		gotoxy(20, 1);
		printf("���� �Է�(1.����, 2.����, 3.��, -1.����) : ");
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
				printf("����� ����\n");
			}
			else if ((user == 1 && comp == 2) || (user == 2 && comp == 3) || (user == 3 && comp == 1)) {
				pan = 2;
				gotoxy(33, 15);
				printf("��ǻ���� ����\n");
			}
			else if (user == comp) {
				if (pan == 1) {
					gotoxy(33, 15);
					printf("����� �¸�\n");
					win += 1;
					pan = 0;
				}
				else if (pan == 2) {
					gotoxy(33, 15);
					printf("��ǻ���� �¸�\n");
					lose += 1;
					pan = 0;
				}
				else {
					gotoxy(33, 15);
					printf("�����ϴ�. �ٽ�\n");
				}
			}
				
			
		}
		system("pause");
		system("cls");
	}
}