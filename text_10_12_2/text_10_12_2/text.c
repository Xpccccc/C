#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void bubble_sort(int* arr,int sz)
{
	//确定冒泡函数趟数
	int i = 0;
	for (i = 0;i < sz-1;i++)
	{
		//每一趟冒泡排序
		int j = 0;
		//假设这一趟要排序的数据已经有序
		int flag = 1;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j ] = arr[j+1];
				arr[j+1] = tmp;
				flag = 0;      //这一趟的数据不是有序
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,0,1,2,3,4,5,6,7,8 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	//arr是数组，我们对数组进行传参，传过去的是数组arr的首元素的地址 --> &arr[0]
	bubble_sort(arr,sz);//冒泡排序函数
	for (i = 0;i < sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}