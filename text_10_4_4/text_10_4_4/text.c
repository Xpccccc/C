#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//数一下1—100中的数字有多少个9

int main()
{
	int i = 0;
	int count = 0;
	for(i=1; i<=100; i++)
	{
		if(9 == i%10)
		{
			printf("%d ",i);
			count++;
		}
		if( 9 == i/10)
		{
			printf("%d ",i);
			count++;
		}
		
	}
	printf("\ncount = %d\n",count);;
}
