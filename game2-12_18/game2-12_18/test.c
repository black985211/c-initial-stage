#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*******************\n");
	printf("****  1.play   ****\n");
	printf("***** 0.exit   ****\n");
	printf("*******************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("game start\n");
			game();
			break;
		case 0:
			printf("game end\n");
			break;
		default:
			printf("����������������룺\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}