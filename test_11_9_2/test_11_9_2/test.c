#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//用*打印菱形
	int i = 0;
	int n = 0;
	//输入打印一半行数
	scanf("%d", &n);
	//上一半行
	for (i = 0; i < n; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下一半行
	for (i = 0; i < n - 1 ; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * (n - 1 - i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************