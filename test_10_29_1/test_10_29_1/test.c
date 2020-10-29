#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//函数实现

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int Xor(int x, int y)
{
	return x ^ y;
}

void menu()
{
	printf("******************************\n");
	printf("**** 1.加法     2.减法********\n");
	printf("*****3.乘法     4.除法********\n");
	printf("*****5.异或     0.退出********\n");
	printf("******************************\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };    //创建函数指针数组 ，用函数指针访问函数来实现函数的功能
	int sz = sizeof(pfArr) / sizeof(pfArr[0])-1;    //  函数指针数组大小
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		if (input >= 1 && input <= sz)  //判断是否输入正确
		{
			printf("请输入两个操作数：>");
			scanf("%d%d", &x, &y);   
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (0 == input)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	system("pause");
	return 0;
}