#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("*******************\n");
	printf("****  1.play   ****\n");
	printf("***** 0.exit   ****\n");
	printf("*******************\n");
} 
void  game()
{
	char ret = 0;
	char board[ROW][COL];
	//��ʼ��һ������Ϊȫ�ո�
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')//����ʤ����ƽ��
		{
			break;
		}
		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')//����ʤ����ƽ��
		{
			break;
		}
	
	}
	if (ret == '#')
		printf("comuter win\n");
	else if (ret == '*')
		printf("player win\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
}
//�ж���Ӯ
//���Ӯ��*
//����Ӯ��#
//ƽ�֣�Q
//��Ϸ������C
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