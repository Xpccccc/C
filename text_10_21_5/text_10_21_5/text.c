#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0x11223344;  //  44332211  //倒序存放
	char* pc = (char*)&a;
	*pc = 0;    //访问一个字节，即44 --> 00
	printf("%x\n", a); // 打印时再顺序
	return 0;
}