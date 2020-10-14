#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//ÿһ��
	for (i = 0; i < row; i++)
	{
		//ÿһ��
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//ÿһ��
	for (i = 0; i < row; i++)
	{
		//ÿһ��
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
	//����������������
	int x = 0;
	int y = 0;
	printf("�������:>");
	scanf("%d%d",&x,&y);
	//���볬����Χ�������������
	if (x <= row && y <= col && x >= 1 && y >= 1)
	{
		//ָ���������ݸ�Ϊ '*'
		board[x - 1][y - 1] = '*';
	}
	else
	{
		printf("�����������������\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	//�������������
	x = rand() % row;//x --> 0~row-1
	y = rand() % col;//y --> 0~col-1
	printf("��������:>\n");
	//�жϵ�ǰ�����Ƿ�������
	if (' ' == board[x][y])
	{
		//�������� '#'
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
				return 0;//û��
			}
		}
	}
	return 1;//����
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{
		if (board[i][0] ==  board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж���
	for (j = 0; i < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[j][1];
		}
	}
	//�ж϶Խ���
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