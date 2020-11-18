#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strncpy(char* dest, char* src, int num)
{
	assert(dest&&src);
	char* ret = dest;
	//先求要复制的字符串长度
	int len = strlen(src);
	//复制的长度减字符串长度
	int count = num - len;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	//若要复制的长度大于要复制的字符串的长度
	while (count>0)
	{
		*src = '\0';
		*dest++ = *src++;
		count--;
	}
	return ret;
}
int main()
{
	char arr1[] = "hello";
	char arr2[] = "bit";
	//模拟实现my_strncpy
	char* ret = my_strncpy(arr1, arr2, 4);
	printf("%s\n", ret);
	return 0;
}

