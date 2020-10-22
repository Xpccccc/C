#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1); 
		//1010   - n
		//1001   - n-1
		//1000   - n
		count++;		   
	}					   
	return count;
}

int get_diff_bit(int m, int n)
{
	int tmp = 0;
	tmp = m^n;
	count_bit_one(tmp);
}

int main()
{
	//int a = 0;
	int m = 0;
	int n = 0;
	scanf("%d%d", &m,&n);
	//写一个函数求a的二进制（补码）中有几个1
	//int count = count_bit_one(a);

	//计算整型（32位）m和n的二进制表达中，有多少个bit位不同
	int count = get_diff_bit(m, n);
	printf("%d\n", count);
	return 0;
}