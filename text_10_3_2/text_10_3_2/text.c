#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//#include <string.h>
//折半查找算法
//在数组中查找一个数

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0])-1;//计算元素个数
	int left = 0;    //左下标
	int right = sz;  //右下标

	while (left <= right)  //左下标大于右下标跳出while循环
	{
		int mid =(left+right)/2;
		if(arr[mid] > k)
		{
			right = mid-1;
		}
		else if(arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			printf("找到了，下标为%d\n",mid);
			break;
		}
	}
	if(left > right)
	{
		printf("找不到\n");
	}

	return 0;
}
