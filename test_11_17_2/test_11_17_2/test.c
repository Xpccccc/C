#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	//��str1��׷��һ���ַ���str1
	//strcat - ��str1����׷��һ���ַ���str2  - �����Լ�׷���Լ�(�ҵ�'\0'���������ǵ���һ���ַ���ֵ���ַ�����'\0'ʱ��'\0'���Ҳ����ˣ�)
	//strncat - ��str1����׷��str2��n���ַ� - �����Լ�׷���Լ�
	strncat(str1, str1, len1);
	//strstr - ���Ӵ���
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
	//�ж��Ƿ������õ�
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
