#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <string.h>
#include <assert.h>

void LeftHanded(char arr[], int k)
{
	assert(arr != NULL);
	//字符串长度
	int len = strlen(arr);

	int i = 0;

	while (k)
	{
		if ((k >= 0) && (k <= len))
		{
			while (k)
			{
				char tmp = arr[0];//保存每次左旋时的第一个字符
				for (i = 0; i<len - 1; i++)
				{
					arr[i] = arr[i + 1];
				}
				arr[i] = tmp;//最后一个字符为没变之前的字符
				k--;
			}
		}
		else
		{
			printf("左旋元素个数有误,请重新输入:");
			scanf("%d", &k);
		}
	}
}

int main()
{
	char arr[20];
	int k = 0;
	printf("请输入需要左旋的字符:");
	gets(arr);
	//左旋函数
	printf("请输入需要左旋字符个数:");
	scanf("%d", &k);
	LeftHanded(arr, k);
	printf("%s\n", arr);
	return 0;
}

