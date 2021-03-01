#include<stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

char InitBoard(char board[ROWS][COLS], int row, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);