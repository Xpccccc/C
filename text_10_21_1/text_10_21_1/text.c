#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	//整型数组 - 存放整型
	//字符数组 - 存放数组
	//指针数组 - 存放指针

	int* arr[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ",*(arr[i]));
	}
	return 0;
}