#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//每一列
	for (i = 0; i < row; i++)
	{
		//每一行
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] == ' ';
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//每一列
	for (i = 0; i < row; i++)
	{
		//每一行
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (j = 0; j < row; j++)
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


void PlayerMove(char board[ROW][COL], int row, int col)
{
	//玩家输入下棋的坐标
	int x = 0;
	int y = 0;
	printf("玩家下棋:>");
	scanf("%d%d",&x,&y);
	//输入超过范围坐标的重新输入
	if (x <= row && y <= col && x >= 1 && y >= 1)
	{
		//指定坐标内容改为 '*'
		board[x - 1][y - 1] = '*';
	}
	else
	{
		printf("坐标错误，请重新输入\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	//电脑生成随机数
	x = rand() % row;//x --> 0~row-1
	y = rand() % col;//y --> 0~col-1
	printf("电脑下棋:>\n");
	//判断当前格子是否有旗子
	if (' ' == board[x][y])
	{
		//电脑下棋 '#'
		board[x][y] = '#';
	}
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] = ' ')
			{
				return 0;//没满
			}
		}
	}
	return 1;//满了
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] ==  board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断列
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[j][1];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[0][2];
	}

	/*for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				return 'Q';
			}
		}
	}*/
	if (1 == IsFull(board, ROW, COL) )
	{
		return 'Q';
	}
		return 'C';
	

}
