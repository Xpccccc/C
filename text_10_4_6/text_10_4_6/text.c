#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//打印9*9乘法口诀表

int main()
{
	int i = 0;
	int j = 0;
	//打印9行
	for(i=1; i<=9; i++)
	{
		//打印列
		for(j=1; j<=i; j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}