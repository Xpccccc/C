#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <string.h>
#include <assert.h>

void LeftHanded(char arr[], int k)
{
	assert(arr != NULL);
	//�ַ�������
	int len = strlen(arr);

	int i = 0;

	while (k)
	{
		if ((k >= 0) && (k <= len))
		{
			while (k)
			{
				char tmp = arr[0];//����ÿ������ʱ�ĵ�һ���ַ�
				for (i = 0; i<len - 1; i++)
				{
					arr[i] = arr[i + 1];
				}
				arr[i] = tmp;//���һ���ַ�Ϊû��֮ǰ���ַ�
				k--;
			}
		}
		else
		{
			printf("����Ԫ�ظ�������,����������:");
			scanf("%d", &k);
		}
	}
}

int main()
{
	char arr[20];
	int k = 0;
	printf("��������Ҫ�������ַ�:");
	gets(arr);
	//��������
	printf("��������Ҫ�����ַ�����:");
	scanf("%d", &k);
	LeftHanded(arr, k);
	printf("%s\n", arr);
	return 0;
}

