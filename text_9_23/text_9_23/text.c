#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 0;
	printf("请输入一个数: ");
	scanf("%d",&a);
	if( 1 == a%2 )
	{
		printf("%d是奇数！\n",a);
	}
	return 0;
}