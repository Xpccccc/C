#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void bubble_sort(int* arr,int sz)
{
	//ȷ��ð�ݺ�������
	int i = 0;
	for (i = 0;i < sz-1;i++)
	{
		//ÿһ��ð������
		int j = 0;
		//������һ��Ҫ����������Ѿ�����
		int flag = 1;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j ] = arr[j+1];
				arr[j+1] = tmp;
				flag = 0;      //��һ�˵����ݲ�������
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,0,1,2,3,4,5,6,7,8 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr���������ų�����
	//arr�����飬���Ƕ�������д��Σ�����ȥ��������arr����Ԫ�صĵ�ַ --> &arr[0]
	bubble_sort(arr,sz);//ð��������
	for (i = 0;i < sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}