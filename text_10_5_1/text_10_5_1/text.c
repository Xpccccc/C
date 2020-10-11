#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>  //  rand()   srand()
#include <time.h>

void game()
{ 
	int num = 0;
	int guess = 0;
	printf("请开始你的表演： ");
	scanf("%d",&guess);
	num = rand()%100+1;    //   生成随机1-100的数
	//printf("%d\n",num);
	while(1)
	{
		scanf("%d",&guess);
		if(num < guess)
		{
			printf("猜大了\n");
		}
		else if(num > guess)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n\n");
			break;
		}
	}
}

void menu()
{
	printf("**************************\n");
	printf("**** 1.play ** 0.exit ****\n");
}
//猜数字游戏

int main()
{
	int choose = 0;
	srand((unsigned int )time(NULL));    //拿时间戳来设置随机数的生成起始点
	do
	{
		menu();
		scanf("%d",&choose);
		switch(choose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;;
		}

	}while( choose );
	return 0 ;
}
