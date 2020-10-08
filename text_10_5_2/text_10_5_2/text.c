#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char arr[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("电脑将在一分钟后关机，如果取消，请说我是猪。\n请输入>: ");
	scanf("%s",&arr);
	if (strcmp("我是猪",arr) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
}

