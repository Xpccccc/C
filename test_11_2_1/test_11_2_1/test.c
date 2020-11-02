#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;

//假设p 的值为0x100000 .如下表达式的值各是多少
//已知，结构体Test类型的变量大小是20字节

int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1); //0x00100000 + 20(16进制就是14)  - 0x100014
	printf("%p\n", (unsigned long)p + 0x1);//0x00100000 - 十进制 - 1048576  +1  - 0x10001
	printf("%p\n", (unsigned int*)p + 0x1);// 0x00100000 +  4  -0x100004
	return 0;
}

