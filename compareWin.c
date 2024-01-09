#include <stdio.h>

int compareWin(int user, int comp) {
	if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2)) {
		gotoxy(33, 15);
		printf("당신이 이겼습니다.\n");
		return 1;
	}
	return 0;
}


