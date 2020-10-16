#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印雷盘的行
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	//布置雷数目
	int count = EASY_COUNT;
	while (count)
	{
		x = rand() % row + 1;//1~9
		y = rand() % col + 1;//1~9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int NumMine(char mine[ROWS][COLS], int x, int y)
{
	return  mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col)
{
	
	int x = 0;
	int y = 0;
	//判断赢的条件是找到所有不是雷的位置
	int count = 0;
	while (row*col - EASY_COUNT > count)//排查所有不是雷的位置
	{
		printf("请选位置：>");
		scanf("%d%d", &x, &y);
		if ( x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ('1' == mine[x][y])
			{
				printf("很遗憾，游戏结束\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				show[x][y] = NumMine(mine, x, y)+'0';
				DisplayBoard(show, ROW, COL);
				count++;
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入\n");
		}

	}
	if (row*col - EASY_COUNT == count)
	{
		printf("恭喜你，你赢了\n");
	}
	//如果当前位置是雷，直接结束游戏，
	
}




