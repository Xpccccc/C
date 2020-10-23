#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

double Pow(int n, int k)
{
	if (k < 0)
	{
		return (1.0 / Pow(n, -k));
	}
	else if (0 == k)
	{
		return 1;
	}
	else
	{
		return n*Pow(n, k - 1);
	}
}
int main()
{
	//编写一个函数实现n的k次方，使用递归实现
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);              //double类型%lf，不要搞错
	return 0;
}