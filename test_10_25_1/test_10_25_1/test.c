#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)  //const 使 arr数据不能被改变
{
	int count = 0;
	assert(str != NULL);  //保证指针的有效性

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	//字符串长度
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}