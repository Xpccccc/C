#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int fun()
{
	static int count = 0;
	return ++count;
}

//问题表达式

int main()
{
	int answer;
	answer = fun() - fun()*fun();//不确定先调用哪个fun函数
	printf("%d\n", answer);
	return 0;
}