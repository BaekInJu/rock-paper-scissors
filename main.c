#include "myheader.h"   //���� �ε�� <>�� �ƴ϶� ""



int main(void) {
	system("mode con: cols=80 lines=20");

	int num = 0;
	while (1) {
		printf("1. ���������� 2. ����� 3. ����");
	    scanf("%d", &num);
		if (num == 1) {
			int user = 0, comp = 0;
			int win = 0, draw = 0, lose = 0;
			while (1) {
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
					win += compareWin(user, comp);
					lose += compareLose(user, comp);
					draw += compareDraw(user, comp);
				}
				system("pause");
				system("cls");
			}
		}
		else if (num == 2) {
			muchi();
		}
		else {
			break;
		}
		system("pause");
		system("cls");
	}
}