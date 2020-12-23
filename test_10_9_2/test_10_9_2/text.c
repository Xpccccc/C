#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

 int binary_search(int arr[],int k,int sz)
{
	//算法实现
	int left = 0;//左下标
	
	int right = sz-1;//右下标
	
	while( left <= right )
	{
		int mid = (left+right)/2;
		if( arr[mid] > k )
		{
			right = mid-1;
		}
		else if(arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	//二分查找
	//在数组中查找7
	//找到了返回这个数的下标，没找到返回-1；
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);//元素个数
	                //数组只传首元素地址
	int ret = binary_search(arr,k,sz);
	if( -1 == ret )
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n",ret);
	}
	return 0;;
}
