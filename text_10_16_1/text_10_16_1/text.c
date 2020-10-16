#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	//创建一个数组存放雷
	//初始化棋盘大小比显示棋盘要大一圈，方便计算当前位置周围八个位置的雷的个数
	char mine[ROWS][COLS] = { 0 };
	//创建一个数组显示雷的数量
	char show[ROWS][COLS] = { 0 };
	//初始化雷盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印雷盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	//显示当前位置附近雷的个数
	FindMine(mine, show, ROW, COL);
}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));//用时间戳来设置随机数
	//判断输入
	do
	{   
		printf("请选择：>");
		scanf("%d", &input);
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

void menu()
{
	printf("*******************************\n");
	printf("*******1.play  0.exit**********\n");
	printf("*******************************\n");

}

int main()
{
	//扫雷游戏
	menu();//打印选择是否玩游戏
	text();

	return 0;
}
