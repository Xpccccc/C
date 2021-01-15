#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int FindNum(int (*arr)[3], int k, int row, int col)
//{
//	//我的代码
//
//	//int i = 0;
//	////第i行最右边的元素和要找的元素比大小
//	//
//	//for (i = 0; i < row; i++)
//	//{
//	//
//	//	if (*(*(arr + col-1) + i)>k) //当k<第i行最右边的元素和要找的元素时
//	//	{
//	//		int j = 0;
//	//		//再判断该列每个元素与k是否相等
//	//		for (j = 1; j < col; j++)
//	//		{
//	//			if (*(*(arr + col - 1 - j) + i) == k)
//	//				return 1;
//	//		}
//	//		return 0;
//	//	}
//	//	else if (*(*(arr + col-1) + i) == k)
//	//		return 1;
//
//	//}
//	
//	//老师的代码
//
//	//从第一行最后一列元素开始查找
//	int x = 0;
//	int y = col - 1;
//	while ((x <= col - 1) && y >= 0)
//	{
//		//判断列
//		if (arr[x][y] > k) 
//		{
//			y--;
//		}
//		//判断行
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
int FindNum(int(*arr)[3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while ((x <= *py - 1) && y >= 0)
	{
		//判断列
		if (arr[x][y] > k)
		{
			y--;
		}
		//判断行
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}


int main()
{
	//杨氏矩阵
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	//查找的数字
	int x = 3;
	int y = 3;

	int k =8;
	//查找函数

	//返回性函数
	//通过地址修改x,y的值
	int ret = FindNum(arr, k, &x,&y);
	if (1 == ret)
	{
		printf("找到了\n");
		printf("下标为 %d %d\n", x, y);
	}
	else
		printf("没找到\n");
	return 0;
	
}
