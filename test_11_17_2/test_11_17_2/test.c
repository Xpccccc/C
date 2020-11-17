#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	//在str1后追加一个字符串str1
	//strcat - 在str1后面追加一个字符串str2  - 不能自己追加自己(找到'\0'结束，但是当第一个字符赋值给字符串的'\0'时，'\0'就找不到了，)
	//strncat - 在str1后面追加str2的n个字符 - 可以自己追加自己
	strncat(str1, str1, len1);
	//strstr - 找子串的
	char* ret = strstr(str1, str2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdef";
	//判断是否左旋得到
	int ret = is_left_move(arr1, arr2);
	if (1 == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0; 
}
