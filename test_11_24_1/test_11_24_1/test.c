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
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
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
	p = NULL;//防止非法访问
	return 0;
}


