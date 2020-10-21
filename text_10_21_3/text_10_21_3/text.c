#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Swap(int* pa, int* pb,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = *pa; //ͨ��ָ��ķ�ʽ����
		*pa = *pb;
		*pb = tmp;
		pa += 1;  //ָ�����ÿ�ν���+1    
		pb += 1;
	}
}
void Print(int A[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}
int main()
{
	//������A�����ݺ�����B�����ݽ��н���
	int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int B[10] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(A) / sizeof(A[0]);
	Swap(A, B, sz);
	//��ӡ����
	Print(A, sz);
	Print(B, sz);
	return 0;
}