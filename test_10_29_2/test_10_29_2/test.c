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

//回调函数

void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请选择输入操作数：>");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}
int main()
{
	int input = 0;
	//int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };    //函数指针数组
	//int sz = sizeof(pfArr) / sizeof(pfArr[0]) - 1;    //  函数指针数组大小
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出\n");
		case 1:
			Calc(Add); 
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 5:
			Calc(Xor);
			break;
		default:
			printf("选择错误\n");
			break;
		}
		
	} while (input);
	system("pause");
	return 0;
}