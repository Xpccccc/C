#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int *p = (int *)malloc(5 * sizeof(int));//开辟20个字节的内存空间

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

	//用一个新的变量接收realloc的返回值，防止需要开辟的内存空间过大返回NULL指针赋值给p
	int* ptr = realloc(p, 40); //重新开辟40个字节的内存空间
	if (ptr != NULL)
	{
		p = ptr;//如果ptr不是NULL指针，则将ptr的地址赋值给p
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
