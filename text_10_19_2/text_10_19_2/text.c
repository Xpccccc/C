#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while ('\0' != *end)
	{
		end++;
	}
	return end - start;
}

int main()
{
	//strlen - 求字符串长度
	//递归 - 模拟实现了strlen - 计数的方式1，递归的方式2
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

