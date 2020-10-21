#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	//娓告垙鐨勫疄鐜�
	char board[ROW][COL] = { 0 };
<<<<<<< HEAD
	InitBoard(board, ROW, COL);//数组初始化
	DisplayBoard(board, ROW, COL);//打印棋盘
	srand((unsigned int)time(NULL));//随机数
	char ret = 0;
	while (1)
	{	
		//玩家下棋
=======
	InitBoard(board, ROW, COL);//鏁扮粍鍒濆鍖�
	DisplayBoard(board, ROW, COL);//鎵撳嵃妫嬬洏
	srand((unsigned int)time(NULL));//闅忔満鏁�
	char ret = 0;
	while (1)
	{	
		//鐜╁涓嬫
>>>>>>> 0d011a2b5346ae97b43e4b11ec76e6e4690645a9
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//鍒ゆ柇鏄惁璧�
		//鐜╁璧�  '*'
		//鐢佃剳璧�  '#'
		//骞冲眬    'Q'
		//缁х画    'C'
		ret = IsWin(board, ROW, COL);;
		if (ret != 'C')
		{
			break;
		}
		//鐢佃剳涓嬫
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
<<<<<<< HEAD
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
=======
		{
			printf("鐜╁璧n");
		}
		else if (ret == '#')
		{
			printf("鐢佃剳璧n");
		}
		else if (ret == 'Q')
		{
			printf("骞冲眬\n");
		}
>>>>>>> 0d011a2b5346ae97b43e4b11ec76e6e4690645a9
}
void text()
{
	int input = 0;
	do
	{
		printf("**************************\n");
		printf("*****1.play   2.exit******\n");
		printf("**************************\n");
		printf("璇烽�夋嫨:>");
		scanf("%d", &input);  //杈撳叆1寮�濮嬶紝0閫�鍑烘父鎴忥紝鍏朵粬閲嶆柊杈撳叆
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("閫�鍑烘父鎴廫n");
			break;
		default:
			printf("杈撳叆閿欒锛岃閲嶆柊杈撳叆\n");
			break;
		}
	} while (input);
}

int main()
{
	//涓夊瓙妫�
	text();
	return 0;
}
