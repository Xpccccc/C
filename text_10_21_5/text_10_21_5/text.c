#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0x11223344;  //  44332211  //������
	char* pc = (char*)&a;
	*pc = 0;    //����һ���ֽڣ���44 --> 00
	printf("%x\n", a); // ��ӡʱ��˳��
	return 0;
}