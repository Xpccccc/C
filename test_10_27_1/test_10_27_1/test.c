#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);  // arr���ַ��������Ԫ�ص�ַ
	printf("%d\n", sz);
}
int main()
{
	char arr[10] = { 0 };
	test(arr);
	return 0;
}