#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a = -1;           //有符号数的char范围是 -128~127
	signed char b = -1;
	unsigned char c = -1;  //无符号数的char范围是 0~255
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	system("pause");
	return 0;
}