#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}

}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left]= arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʵ�ֺ���init()�����ʼ��Ϊ0
	//Init(arr,sz);
	//����Ԫ������
	Reverse(arr,sz);
	return 0;
}