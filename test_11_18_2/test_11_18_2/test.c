#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int my_strcmp(const char* str1, const char* str2)
{
	//�ӵ�һ���ַ���ʼ�ж������ַ����Ƿ����
	while (*str1 == *str2)
	{
		//�����ַ����
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//�����
	return (*str1 - *str2);
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "qwert";
	//ģ��ʵ��strcmp
	int ret = my_strcmp(p1, p2);
	printf("%d\n",ret);
	return 0;
}
