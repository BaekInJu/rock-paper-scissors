#include <stdio.h>
#include <Windows.h>

int compareDraw(int user, int comp) {
	if (user == comp) {
		gotoxy(33, 15);
		printf("�����ϴ�.\n");
		return 1;
	}
	return 0;
}