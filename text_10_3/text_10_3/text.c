#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����n�Ľ׳�

int main()
{
	int i = 0;
	int ret =1;
	int n = 0;
	int sum = 0;
	for( n=1; n<=3; n++)
	{
		ret = 1;
		for(  i=1; i<=n; i++ )
		{
			ret *= i;
		}
		//n�Ľ׳�(ret = ret * n;)
		sum += ret;
	}
	
	printf("%d\n",sum);
	return 0;
}