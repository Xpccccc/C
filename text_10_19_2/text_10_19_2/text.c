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
	//strlen - ���ַ�������
	//�ݹ� - ģ��ʵ����strlen - �����ķ�ʽ1���ݹ�ķ�ʽ2
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

