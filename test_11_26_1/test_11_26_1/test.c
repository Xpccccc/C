#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int *p = (int *)malloc(5 * sizeof(int));//����20���ֽڵ��ڴ�ռ�

	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}

	//��һ���µı�������realloc�ķ���ֵ����ֹ��Ҫ���ٵ��ڴ�ռ���󷵻�NULLָ�븳ֵ��p
	int* ptr = realloc(p, 40); //���¿���40���ֽڵ��ڴ�ռ�
	if (ptr != NULL)
	{
		p = ptr;//���ptr����NULLָ�룬��ptr�ĵ�ַ��ֵ��p
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;
	return 0;
}
