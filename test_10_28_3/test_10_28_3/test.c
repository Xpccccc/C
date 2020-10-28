#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", Add(a, b));

	//&函数名 和 函数名 都是函数的地址

	int (*pa)(int, int) = Add;
	printf("%d\n", (*pa)(2, 3));

	system("pause");
	return 0;
}
