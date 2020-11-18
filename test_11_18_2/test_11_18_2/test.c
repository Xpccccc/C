#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int my_strcmp(const char* str1, const char* str2)
{
	//从第一个字符开始判断两个字符串是否相等
	while (*str1 == *str2)
	{
		//所有字符相等
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//不相等
	return (*str1 - *str2);
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "qwert";
	//模拟实现strcmp
	int ret = my_strcmp(p1, p2);
	printf("%d\n",ret);
	return 0;
}
