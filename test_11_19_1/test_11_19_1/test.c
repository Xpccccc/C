#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1&&str2);
	

	//�ҵĴ���

	//��¼str2��str1��ȵ��ַ�����
	//int count = 0;
	//int len = strlen(str2);
	////����str1�ҵ�str2�����ַ�
	//while (*s1 != *s2)
	//{
	//	s1++;
	//	str1++;
	//}

	////�ӿ�ʼ��ͬ���ַ����Ƚ�
	//while (*str1 != '\0')
	//{
	//	//��¼��ʼ�ַ�����ͬ�ĵ�ַ
	//	const char* start = str1;
	//	count = 0;//����
	//    while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	//	{
	//		s1++;
	//		s2++;
	//		count++;
	//	}
	//	str1++;
	//	//����Ⱥ��һ���ַ�������
	//	s1 = str1;
	//	//��str2��str1�����ַ���ȵĸ������
	//	if (count == len)
	//		return (char*)start;
	//}

	//�ٷ�
	char* s1 = NULL;
	char* s2 = NULL;
    char* start = (char*)str1; //ǿ������ת��
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
			return start;//�ҵ��Ӵ�
		}
		if (*s1 == '\0')
		{
			return NULL;//s1��s2�̣���ǰ��ֹ����
		}
		start++;
	}
	return NULL;//û�ҵ��Ӵ�

}

int main()
{
	char* p1 = "abc";
	char* p2 = "abcdefg";
	//ģ��ʵ��strstr
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}