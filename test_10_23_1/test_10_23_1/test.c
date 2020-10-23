#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Choose(int n,int m )  // 逆序输出  
{						   //顺序输出从i从30或31开始	
	int i = 0;
	for (i = n; i < 32; i += 2)
	{
		if (0 == ((m >> i) & 1))
		{
			printf("0 ");
		}
		else
			printf("1 ");
	}
	printf("\n");
}
void Print(int m)
{
	int i = 0;
	printf("偶数位：");
	Choose(0,m);
	printf("\n");
	printf("奇数位：");
	Choose(1,m);
}
int main()
{
	//分别打印一个整数二进制的奇数位和偶数位
	int m = 0;
	scanf("%d", &m);
	Print(m);
	return 0;
}
