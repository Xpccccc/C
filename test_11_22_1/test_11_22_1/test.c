#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 5, 4, 3 };
	char arr3[10] = "";
	memset(arr3, '#', 10);//10是字节数
	int arr4[10] = {0};
	//40个字节
	//01 01 01 01 01 01 01 01 01 01 00 00 ... -- 16进制
	memset(arr4, 1, 10);
	int ret = memcmp(arr1, arr2, 8); //8是字节数
	printf("%d\n", ret);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr4[i]);
	}
	printf("%s\n", arr3);

	return 0;
}