#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//��һ��1��100�е������ж��ٸ�9

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
	printf("\ncount = %d\n",count);
}