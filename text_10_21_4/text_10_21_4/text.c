#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
 
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	short* p = (short*)arr;  //ǿ������ת��
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;   //short����ָ�������ÿ��ֻ���������ֽ�
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}