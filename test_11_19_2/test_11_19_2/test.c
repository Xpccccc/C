#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t num)  //num为字节个数
{
	void * ret = dest;//目标起始地址
	assert(dest != NULL);
	assert(src != NULL);

	//目标地址在被拷贝起始地址前 - 从前往后拷贝
	if (dest < src)
	{
		while (num--) //拷贝num个字节
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
		
	}
	//目标地址在被拷贝起始地址后 - 从后往前拷贝
	else
	{
		while (num--)
		{
			*(((char*)dest) + num) = *(((char*)src) + num);
		}
	}
	return ret;

}
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//  void * ret = dest;//目标起始地址
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--) //拷贝num个字节
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[5] = { 0 };
	//模拟实现memcpy
	//my_memcpy(arr2, arr1, sizeof(arr1)); //不能实现内存的重叠拷贝

	//模拟实现memmove - 能实现内存的重叠拷贝
	my_memmove(arr1, arr1+2, 20);
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
