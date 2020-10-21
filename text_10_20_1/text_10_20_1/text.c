#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);  //地址 - 首元素地址
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);  //首元素地址
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);  //地址 - 整个数组的地址
	printf("%p\n", &arr+1);

}