#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int main()
{
	//���0~100000��������
	// i 
	int i = 0;
	for(i = 0; i <= 100000; i++)
	{
		//ÿ��ѭ������
		int n = 1;
		int tmp = i;
		int sum = 0;
		//n - ����i��λ��
		while (tmp /= 10)
		{
			n++;
		}
		//i��ÿһλ
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
			//ÿһλ��n�η����
		}
		
		//�ж�i��sum���
		if (i == sum)
		{
			printf("%d ", i);
		}
		
	}
	return 0;
}
