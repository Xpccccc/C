#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001
	//
	float *pFloat = (float*)&n; // int类型存储 强制类型转换为 float类型存储
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%lf\n", *pFloat);//0.000000
	//(-1)^0 * 0.00000000000000000001001 *2^-126
	//
	*pFloat = 9.0;
	//1001.0
	//1.001*2^3
	//(-1)^0 *1.001 *2^3
	//01000001000100000000000000000000

	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%lf\n", *pFloat);//9.0
	return 0;
}