#include <stdio.h>
#include <Windows.h>

int compareLose(int user, int comp) {
	if ((user == 1 && comp == 2) || (user == 2 && comp == 3) || (user == 3 && comp == 1)) {
		gotoxy(33, 15);
		printf("당신이 졌습니다.\n");
		return 1;
	}
	return 0;
}