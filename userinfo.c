#include <stdio.h>
#include <Windows.h>

void userinfo(int num) {  //num == 1(����), 2(����), 3(��)
	if (num == 1) {
		gotoxy(5, 3);
		printf("����� ������ �½��ϴ�.\n");
		gotoxy(5, 5);
		printf("    ���  ���\n");
		gotoxy(5, 6);
		printf("    ���  ���\n");
		gotoxy(5, 7);
		printf("    ���  ���\n");
		gotoxy(5, 8);
		printf("    ���  ���\n");
		gotoxy(5, 9);
		printf("    ���  ���\n");
		gotoxy(5, 10);
		printf("�������� \n");
		gotoxy(5, 11);
		printf("�������� \n");
		gotoxy(5, 12);
		printf("�������� \n");
		gotoxy(5, 13);
		printf("�������� \n");
	}
	else if (num == 2) {
		gotoxy(5, 3);
		printf("����� ������ �½��ϴ�.\n");
		gotoxy(5, 7);
		printf("  ��������� \n");
		gotoxy(5, 8);
		printf("����������\n");
		gotoxy(5, 9);
		printf("����������\n");
		gotoxy(5, 10);
		printf("���������� \n");
		gotoxy(5, 11);
		printf("����������\n");
		gotoxy(5, 12);
		printf("����������\n");
	}
	else if (num == 3) {
		gotoxy(5, 3);
		printf("����� ���ڱ⸦ �½��ϴ�.\n");
		gotoxy(4, 6);
		printf("         ��� ��� ��� ���\n");
		gotoxy(4, 7);
		printf("         ��� ��� ��� ���\n");
		gotoxy(4, 8);
		printf(" ���    ��� ��� ��� ���\n");
		gotoxy(4, 9);
		printf("   ���  ��� ��� ��� ���\n");
		gotoxy(4, 10);
		printf("      ������������ \n");
		gotoxy(4, 11);
		printf("      ������������\n");
		gotoxy(4, 12);
		printf("      ������������ \n");
	}

}