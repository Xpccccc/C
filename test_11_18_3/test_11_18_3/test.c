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
	while (num && (*src)) //��*srcΪ0ʱֹͣ
	{
		*dest = *src;
		dest++;
		src++;
		num--;
	}
	*dest++ = '\0'; //������num���ַ�������һ���ַ���ֵΪ'\0'
	return ret;
}

int main()
{
	char arr1[] = "hello\0xxxxxxxxxxxxxxxxxxxxxxx";
	char arr2[] = "world";
	//ģ��ʵ��strncat
	char* ret = my_strncat(arr1, arr2, 8);
	printf("%s\n", ret);
	return 0;
}
