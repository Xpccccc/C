#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//每一列
	for (i = 0;i < row;i++)
	{
		//每一行
		int j = 0;
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//每一列
	for (i = 0;i < row;i++)
	{
		//每一行
		int j = 0;
		for (j = 0;j < col;j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (j = 0;j < row;j++)
		{
			if (i < row - 1)
			{
				printf("____");
	
				//___|___|___
				//___|___|___
				//   |   |
			}
			
		}
		printf("\n");
		
		
	
	}
	
}
