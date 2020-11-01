#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//二维数组
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a)); //48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 - a[0]相当于第一行作为一维数组的数组名
	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小

	printf("%d\n", sizeof(a[0] + 1)); // 4 - a[0]是第一行的数组名，数组此时是首元素的地址，a[0]其实就是第一行第一个元素的地址
	//所以 a[0]+1 就是第一行第二个元素的地址

	printf("%d\n", sizeof(*(a[0] + 1)));// 4 - *(a[0] + 1)是第一行第二个元素
	printf("%d\n", sizeof(a + 1));//4 - a是二维数组的数组名，没有sizeof(a),也没有&(a),所以a是首元素的地址
	//而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行(首元素)的地址
	//a+1 就是第二行的地址

	printf("%d\n", sizeof(*(a + 1)));//16 - sizeof(a[1]) 计算第二行的大小，单位是字节
	printf("%d\n", sizeof(&a[0] + 1));//4 - 第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//16 - 计算第二行的大小，单位是字节
	printf("%d\n", sizeof(*a));//a是首元素的地址 - 第一行的地址 ，*a就是第一行，sizeof(*a)就是计算第一行的大小
	printf("%d\n", sizeof(a[3]));//16  - sizeof内部表达式不参与真实的运算，只是根据他的类型来计算他的大小 - 和a[0]一样

	return 0;
}