#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Print_table(int num)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-2d*%-2d=%-4d", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	//ʵ��һ������ ����ӡ�˷��ھ�������к����Լ�ָ��
	int input = 0;
	printf("������Ҫ��ӡ���м��еĳ˷��ھ���");
	scanf("%d",&input);
	Print_table(input);
	return 0;
}