#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i<10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i<10; i++)
		{
			printf("%d ", *(p + i) = i);
		}
	}
	free(p);
	p = NULL;//��ֹ�Ƿ�����
	return 0;
}


