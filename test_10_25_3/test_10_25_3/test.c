#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a = -128;  //128（-127+1）结果也一样
	//10000000000000000000000010000000
	//11111111111111111111111101111111
	//11111111111111111111111110000000 - 补码
	//10000000
	//11111111111111111111111110000000 - 补码(整型提升)

	printf("%u\n", a);
	//%d - 打印十进制的有符号数字
	//%u - 打印十进制的无符号数字
	system("pause");
	return 0;
}
