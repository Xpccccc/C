#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Fib(int n)
{
	//递归不适合求斐波那契数，运算量太大
	/*if( n<=2 )
		return 1;
	else
		return Fib(n-1)+Fib(n-2);*/

	//用for循环求

	int a = 1;
	int b = 1;
	int c = 1;//当n<=2时，斐波那契数为一
	while( n>2 )
	{
		c = a+b;
		a = b;
		b = c;
		n--;//算完一次减一（算4需要运算2次，5需要3次），最后跳出while循环
	}
	return c;

}

int main()
{
	//求第n个斐波那契数
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf ("ret = %d",ret);
	return 0;
}