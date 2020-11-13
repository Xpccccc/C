#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//杨辉三角
	//   1
	//  1 1 
	// 1 2 1
	//1 3 3 1

	//创建一个二维数组
	int arr[10][10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		//空格
		for (j = 0; j < 9 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
		
			if (0 == j)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			//只需要计算第二行第一列以后的结果
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
