#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//æ¯ä¸€åˆ—
	for (i = 0; i < row; i++)
	{
		//æ¯ä¸€è¡Œ
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
	//æ¯ä¸€åˆ—
	for (i = 0; i < row; i++)
	{
		//æ¯ä¸€è¡Œ
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
	//çŽ©å®¶è¾“å…¥ä¸‹æ£‹çš„åæ ‡
	int x = 0;
	int y = 0;
	printf("çŽ©å®¶ä¸‹æ£‹:>");
	scanf("%d%d",&x,&y);
	//è¾“å…¥è¶…è¿‡èŒƒå›´åæ ‡çš„é‡æ–°è¾“å…¥
	if (x <= row && y <= col && x >= 1 && y >= 1)
	{
		//æŒ‡å®šåæ ‡å†…å®¹æ”¹ä¸º '*'
		board[x - 1][y - 1] = '*';
	}
	else
	{
		printf("åæ ‡é”™è¯¯ï¼Œè¯·é‡æ–°è¾“å…¥\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	//ç”µè„‘ç”Ÿæˆéšæœºæ•°
	x = rand() % row;//x --> 0~row-1
	y = rand() % col;//y --> 0~col-1
	printf("ç”µè„‘ä¸‹æ£‹:>\n");
	//åˆ¤æ–­å½“å‰æ ¼å­æ˜¯å¦æœ‰æ——å­
	if (' ' == board[x][y])
	{
		//ç”µè„‘ä¸‹æ£‹ '#'
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
			if (board[i][j] == ' ')/////////////ÏÈ' 'ÔÙboard[i][j]
			{
				return 0;//æ²¡æ»¡
			}
		}
	}
	return 1;;//æ»¡äº†
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//åˆ¤æ–­è¡Œ
	for (i = 0; i < row; i++)
	{
		if (board[i][0] ==  board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
<<<<<<< HEAD
	//ÅÐ¶ÏÁÐ
=======
	//åˆ¤æ–­åˆ—
>>>>>>> 0d011a2b5346ae97b43e4b11ec76e6e4690645a9
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[1][j];
		}
	}
	//åˆ¤æ–­å¯¹è§’çº¿
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
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
