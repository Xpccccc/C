#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strncpy(char* dest, char* src, int num)
{
	assert(dest&&src);
	char* ret = dest;
	//����Ҫ���Ƶ��ַ�������
	int len = strlen(src);
	//���Ƶĳ��ȼ��ַ�������
	int count = num - len;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	//��Ҫ���Ƶĳ��ȴ���Ҫ���Ƶ��ַ����ĳ���
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
	//ģ��ʵ��my_strncpy
	char* ret = my_strncpy(arr1, arr2, 4);
	printf("%s\n", ret);
	return 0;
}

