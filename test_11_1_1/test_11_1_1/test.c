#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	//数组名是首元素地址
	//1.sizeof(数组名) - 数组表示整个数组
	//2.&数组名 - 数组名表示整个数组
	//一维数组
	int a[] = { 1, 2, 3, 4 };//4*4 = 16

	//sizeof
	printf("%d\n", sizeof(a));//sizeof(数组名) - 计算的是数组总大小 - 单位是字节 - 16
	printf("%d\n", sizeof(a + 0));//4/8 - 数组名这里表示首元素的值 ，a+0还是首元素的地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*a));//4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
	printf("%d\n", sizeof(a + 1));//4/8 - 数组名这里表示首元素的值 ，a+1还是首元素的地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(a[1]));//4 - 第2个元素的大小
	printf("%d\n", sizeof(&a));//4/8 - &a取出的是数组的地址，但是数组的地址也是地址
	printf("%d\n", sizeof(*&a));//16 - &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小
	printf("%d\n", sizeof(&a + 1));//4/8 - &a是数组的地址，&a+1虽然跳过整个数组，但还是地址
	printf("%d\n", sizeof(&a[0]));//4/8 - &a[0]是第1个元素的地址
	printf("%d\n", sizeof(&a[0] + 1)); // 4/8 - &a[0]是第2个元素的地址

	printf("----------------------------------------\n");

	//字符数组
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//sizeof
	printf("%d\n", sizeof(arr)); //sizeof计算的是数组大小 ，6*1 = 6字节
	printf("%d\n", sizeof(arr + 0));// 4/8 - arr是首元素的地址 ，arr+0还是首元素的地址 ，地址的大小是4/8字节
	printf("%d\n", sizeof(*arr));//1 - arr是首元素的地址 ，*arr就是首元素，首元素是字符大小是一个字节
	printf("%d\n", sizeof(arr[1])); //1
	printf("%d\n", sizeof(&arr)); //&arr是数组的地址
	printf("%d\n", sizeof(&arr + 1));//地址大小
	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址

	printf("----------------------------------------\n");


	//strlen
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值

	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err


	//strlen函数的实现的一个参数是const char* 

	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//随机值-1

	printf("----------------------------------------\n");


	char arr1[] = "abcdef";

	//strlen
	printf("%d\n", strlen(arr1));//6
	printf("%d\n", strlen(arr1 + 0));//6
	//printf("%d\n", strlen(*arr1));//err
	//printf("%d\n", strlen(arr1[1]));//err
	printf("%d\n", strlen(&arr1));// 6 - 数组的地址 - 数组指针 char(*p)[7] = &arr1
	printf("%d\n", strlen(&arr1 + 1));//随机值
	printf("%d\n", strlen(&arr1[0] + 1));//5

	printf("----------------------------------------\n");


	char* p = "abcdef";

	//sizeof
	printf("%d\n", sizeof(p));//4/8 - 计算指针变量p的大小
	printf("%d\n", sizeof(p + 1));//4/8 - p+1得到的是字符b的地址
	printf("%d\n", sizeof(*p));//1 - *p 就是字符串的第一个字符 - 'a'
	printf("%d\n", sizeof(p[0]));// 1 - int [10]; arr[0] == *(arr + 0)   p[0] == *(p + 0) == 'a'
	printf("%d\n", sizeof(&p));//4/8 - 地址
	printf("%d\n", sizeof(&p + 1));//4/8 - 地址
	printf("%d\n", sizeof(&p[0] + 1));//4/8 - 地址

	printf("----------------------------------------\n");


	//strlen
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5

	return 0;;
}
