#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
//是素数返回1；不是素数返回0
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
	//判断100-200之间的素数
	int i = 0;
	for(i=100; i<=200; i++)
	{
		//判断i是否为素数
		if( 1 == is_prime(i) )
		{
			printf("%d ",i);;
		}
	}
	return 0 ;
}
