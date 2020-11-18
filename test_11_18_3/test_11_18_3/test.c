#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strncat(char* dest, const char* src, int num)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (num && (*src)) //当*src为0时停止
	{
		*dest = *src;
		dest++;
		src++;
		num--;
	}
	*dest++ = '\0'; //拷贝完num个字符，后面一个字符赋值为'\0'
	return ret;
}

int main()
{
	char arr1[] = "hello\0xxxxxxxxxxxxxxxxxxxxxxx";
	char arr2[] = "world";
	//模拟实现strncat
	char* ret = my_strncat(arr1, arr2, 8);
	printf("%s\n", ret);
	return 0;
}
