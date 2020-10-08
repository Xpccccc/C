#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <math.h>

//输出100—200之间的素数
//sqrt—开平方的数学库函数

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for(i=100; i<=200; i++)  //for(i=101; i<=199; i+=2) 最好求最优解，从奇数中找素数（优化）
	{
		for(j=2; j<sqrt(i); j++)
		{
			if(0 == i%j)
			{   
				break;
			}	
		}
		if(j > sqrt(i))
		{
			count++;
			printf("%d ",i);
		}
	}
		printf("\ncount = %d\n ",count);
	return 0;
}