#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//使用数组的形式遍历
void print1(int arr[][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
 
//使用数组指针的形式遍历
void print2(int (*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *((*p + i) + j)); //  *p+i是第i行的地址
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	
	print1(arr, 3, 5);//数组名是首元素地址 - {1,2,3,4,5}的地址
	print2(arr, 3, 5);
	system("pause");
	return 0;
}