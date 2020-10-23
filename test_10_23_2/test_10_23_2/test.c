#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Print_table(int num)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-2d*%-2d=%-4d", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	//实现一个函数 ，打印乘法口诀表，表的行和列自己指定
	int input = 0;
	printf("请输入要打印几行几列的乘法口诀表：");
	scanf("%d",&input);
	Print_table(input);
	return 0;
}