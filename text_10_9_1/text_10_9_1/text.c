#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
//����������1��������������0
int is_prime( int n)
{
	int j = 0;
	for(j=2; j<sqrt(n); j++)
	{
		if( 0 == n%j )
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	//�ж�100-200֮�������
	int i = 0;
	for(i=100; i<=200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if( 1 == is_prime(i) )
		{
			printf("%d ",i);
		}
	}
	return 0 ;
}