#include <stdlib.h>        //rand(), srand()
#include <time.h>

int cominfo(void) {
	int comp = 0;
	srand(time(NULL));
	comp = rand() % 3 + 1;

	if (comp == 1) {
		gotoxy(45, 3);
		printf("컴퓨터는 가위를 냈습니다.\n");
		gotoxy(45, 5);
		printf("    ■■  ■■\n");
		gotoxy(45, 6);
		printf("    ■■  ■■\n");
		gotoxy(45, 7);
		printf("    ■■  ■■\n");
		gotoxy(45, 8);
		printf("    ■■  ■■\n");
		gotoxy(45, 9);
		printf("    ■■  ■■\n");
		gotoxy(45, 10);
		printf("■■■■■■■ \n");
		gotoxy(45, 11);
		printf("■■■■■■■ \n");
		gotoxy(45, 12);
		printf("■■■■■■■ \n");
		gotoxy(45, 13);
		printf("■■■■■■■ \n");
		
	}
	else if (comp == 2) {
		gotoxy(45, 3);
		printf("컴퓨터는 바위를 냈습니다.\n");
		gotoxy(45, 7);
		printf("  ■■■■■■■■ \n");
		gotoxy(45, 8);
		printf("■■■■■■■■■\n");
		gotoxy(45, 9);
		printf("■■■■■■■■■\n");
		gotoxy(45, 10);
		printf("■■■■■■■■■ \n");
		gotoxy(45, 11);
		printf("■■■■■■■■■\n");
		gotoxy(45, 12);
		printf("■■■■■■■■■\n");
	}
	else if (comp == 3) {
		gotoxy(45, 3);
		printf("컴퓨터는 보자기를 냈습니다.\n");
		gotoxy(44, 6);
		printf("         ■■ ■■ ■■ ■■\n");
		gotoxy(44, 7);
		printf("         ■■ ■■ ■■ ■■\n");
		gotoxy(44, 8);
		printf(" ■■    ■■ ■■ ■■ ■■\n");
		gotoxy(44, 9);
		printf("   ■■  ■■ ■■ ■■ ■■\n");
		gotoxy(44, 10);
		printf("      ■■■■■■■■■■■ \n");
		gotoxy(44, 11);
		printf("      ■■■■■■■■■■■\n");
		gotoxy(44, 12);
		printf("      ■■■■■■■■■■■ \n");
	}

	return comp;
}
