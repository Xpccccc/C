#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);  //華硊 - 忑啋匼華硊
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);  //忑啋匼華硊
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);  //華硊 - 淕跺杅郪腔華硊
	printf("%p\n", &arr+1);
	return 0;
}
