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

//����p ��ֵΪ0x100000 .���±��ʽ��ֵ���Ƕ���
//��֪���ṹ��Test���͵ı�����С��20�ֽ�

int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1); //0x00100000 + 20(16���ƾ���14)  - 0x100014
	printf("%p\n", (unsigned long)p + 0x1);//0x00100000 - ʮ���� - 1048576  +1  - 0x10001
	printf("%p\n", (unsigned int*)p + 0x1);// 0x00100000 +  4  -0x100004
	return 0;
}

