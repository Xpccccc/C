#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;//目标字符串地址
	//1.目的字符串先找到'\0'
	while (*dest != '\0')
		dest++;
	//2.字符串拷贝 -- 追加
	while (*dest++ = *src++) //因为找到'\0'过后没有指向下一个元素，所以先++，找到下一个字符追加
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	//字符串追加函数
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
