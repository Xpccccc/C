#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1&&str2);
	

	//我的代码

	//记录str2和str1相等的字符个数
	//int count = 0;
	//int len = strlen(str2);
	////先在str1找到str2的首字符
	//while (*s1 != *s2)
	//{
	//	s1++;
	//	str1++;
	//}

	////从开始相同的字符向后比较
	//while (*str1 != '\0')
	//{
	//	//记录起始字符串相同的地址
	//	const char* start = str1;
	//	count = 0;//重置
	//    while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	//	{
	//		s1++;
	//		s2++;
	//		count++;
	//	}
	//	str1++;
	//	//从相等后的一个字符重新找
	//	s1 = str1;
	//	//当str2和str1连续字符相等的个数相等
	//	if (count == len)
	//		return (char*)start;
	//}

	//官方
	char* s1 = NULL;
	char* s2 = NULL;
    char* start = (char*)str1; //强制类型转换
	if (*str2 == '\0')
		return (char*)str1;
	while (*start)
	{
		s1 = start;
		s2 = (char*)str2;

		while (*s1&&*s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return start;//找到子串
		}
		if (*s1 == '\0')
		{
			return NULL;//s1比s2短，提前终止查找
		}
		start++;
	}
	return NULL;//没找到子串

}

int main()
{
	char* p1 = "abc";
	char* p2 = "abcdefg";
	//模拟实现strstr
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}