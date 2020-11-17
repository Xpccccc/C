#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdio.h>

void LeftHanded(char arr[], int k)
{
	assert(arr);   //涉及到指针传参，记得断言
	//字符串长度
	int len = strlen(arr);

	int i = 0;
	while (k)
	{
		char tmp = arr[0];//保存每次字符串的首字符

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
	//判断左旋
	int i = 0;
	for (i = 1; i<len; i++)
	{
		LeftHanded(tmp, 1);

		if (strcmp(tmp, arr1) == 0)
		{
			printf("arr1是arr经过左旋%d个字符得到的\n", i);
		}
	}
	tmp = arr;
	for (i = 1; i<len; i++)
	{
		RightHanded(tmp, 1);

		if (strcmp(tmp, arr1) == 0)
		{
			printf("arr1是arr经过右旋%d个字符得到的\n", i + 1);
		}
	}
}

int main()
{
	char arr[20];
	int k = 0;
	printf("请输入需要左旋的字符串:");
	gets(arr);
	//printf("请输入需要左旋字符的个数:");
	//scanf("%d",&k);
	//左旋函数
	//LeftHanded(arr,k);
	//写一个函数判断一个字符串是否是另一个字符串旋转之后的字符串
	Check(arr);
	//printf("%s\n",arr);
	return 0;
}

