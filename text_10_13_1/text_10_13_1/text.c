#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game() 
{
	//游戏的实现
	char board[ROW][COL] = {0};
	InitBoard(board,ROW,COL);//数组初始化
	DisplayBoard(board,ROW,COL);//打印棋盘
}
void text()
{
	int input = 0;
	do
	{
		printf("**************************\n");
		printf("*****1.play   2.exit******\n");
		printf("**************************\n");
		scanf("%d", &input);  //输入1开始，0退出游戏，其他重新输入
			switch (input)
			{
				case 1:
					game();
					break;
				case 0:
					printf("退出游戏\n");
					break;
				default:
					printf("输入错误，请重新输入\n");
					break;
			}
	} while (input);
}

int main()
{
	//三子棋
	text();
	return 0;
}