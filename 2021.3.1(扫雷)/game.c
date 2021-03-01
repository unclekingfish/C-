#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
char InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;//'*'
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col) 
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i =0;i <= col;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		//打印行号
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}