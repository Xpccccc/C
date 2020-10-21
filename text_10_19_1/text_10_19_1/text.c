#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a[10] = { 0 };
	int i = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	int* p = a;
	for (i = 0; i < sz; i++)
	{
		*p = i;
		p++;     //Ö¸Õë+-ÕûÊý
		printf("%d ", a[i]);
	}
	//printf("%d",a);不能输出数组
	return 0;
}
