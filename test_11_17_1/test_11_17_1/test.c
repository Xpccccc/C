#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdio.h>

void LeftHanded(char arr[], int k)
{
	assert(arr);   //�漰��ָ�봫�Σ��ǵö���
	//�ַ�������
	int len = strlen(arr);

	int i = 0;
	while (k)
	{
		char tmp = arr[0];//����ÿ���ַ��������ַ�

		for (i = 0; i<len - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[i] = tmp;
		k--;
	}
}



void RightHanded(char arr[], int k)
{
	assert(arr);
	int len = strlen(arr);
	LeftHanded(arr, len - k);
}

void Check(char arr[])
{
	assert(arr);
	int len = strlen(arr);
	char* tmp = arr;
	char arr1[] = "deabc";
	//�ж�����
	int i = 0;
	for (i = 1; i<len; i++)
	{
		LeftHanded(tmp, 1);

		if (strcmp(tmp, arr1) == 0)
		{
			printf("arr1��arr��������%d���ַ��õ���\n", i);
		}
	}
	tmp = arr;
	for (i = 1; i<len; i++)
	{
		RightHanded(tmp, 1);

		if (strcmp(tmp, arr1) == 0)
		{
			printf("arr1��arr��������%d���ַ��õ���\n", i + 1);
		}
	}
}

int main()
{
	char arr[20];
	int k = 0;
	printf("��������Ҫ�������ַ���:");
	gets(arr);
	//printf("��������Ҫ�����ַ��ĸ���:");
	//scanf("%d",&k);
	//��������
	//LeftHanded(arr,k);
	//дһ�������ж�һ���ַ����Ƿ�����һ���ַ�����ת֮����ַ���
	Check(arr);
	//printf("%s\n",arr);
	return 0;
}

