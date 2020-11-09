#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int main()
{
	//输出0~100000的自幂数
	// i 
	int i = 0;
	for(i = 0; i <= 100000; i++)
	{
		//每次循环重置
		int n = 1;
		int tmp = i;
		int sum = 0;
		//n - 计算i的位数
		while (tmp /= 10)
		{
			n++;
		}
		//i的每一位
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
			//每一位的n次方相加
		}
		
		//判断i和sum相等
		if (i == sum)
		{
			printf("%d ", i);
		}
		
	}
	return 0;
}
