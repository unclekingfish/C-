#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("****************************************\n");
	printf("**********  1.start   0.exit  **********\n");
	printf("****************************************\n");
}
//游戏的整个算法
void game()
{
	char ret = 0;
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board ,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret=IsWin(board ,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	
}
void test()
{
	int input = 0;
	srand((unsigned )time(NULL));
	do
	{
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();

			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("输入错误，请重新输入\n");
			break;
		}
		}
	} while (input);

}
int main()
{
	test();
		return 0;
}
