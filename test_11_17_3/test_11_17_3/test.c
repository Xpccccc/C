#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int FindNum(int (*arr)[3], int k, int row, int col)
//{
//	//�ҵĴ���
//
//	//int i = 0;
//	////��i�����ұߵ�Ԫ�غ�Ҫ�ҵ�Ԫ�رȴ�С
//	//
//	//for (i = 0; i < row; i++)
//	//{
//	//
//	//	if (*(*(arr + col-1) + i)>k) //��k<��i�����ұߵ�Ԫ�غ�Ҫ�ҵ�Ԫ��ʱ
//	//	{
//	//		int j = 0;
//	//		//���жϸ���ÿ��Ԫ����k�Ƿ����
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
//	//��ʦ�Ĵ���
//
//	//�ӵ�һ�����һ��Ԫ�ؿ�ʼ����
//	int x = 0;
//	int y = col - 1;
//	while ((x <= col - 1) && y >= 0)
//	{
//		//�ж���
//		if (arr[x][y] > k) 
//		{
//			y--;
//		}
//		//�ж���
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
		//�ж���
		if (arr[x][y] > k)
		{
			y--;
		}
		//�ж���
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
	//���Ͼ���
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	//���ҵ�����
	int x = 3;
	int y = 3;

	int k =8;
	//���Һ���

	//�����Ժ���
	//ͨ����ַ�޸�x,y��ֵ
	int ret = FindNum(arr, k, &x,&y);
	if (1 == ret)
	{
		printf("�ҵ���\n");
		printf("�±�Ϊ %d %d\n", x, y);
	}
	else
		printf("û�ҵ�\n");
	return 0;
}