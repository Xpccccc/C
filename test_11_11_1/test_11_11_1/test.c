#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//喝汽水 ，一元一瓶汽水，两个空瓶可以换一瓶汽水，20块可以喝多少瓶汽水
	int money = 20; //钱
	//买回来的汽水喝掉
	int drink = money;//可以喝的
	int empty = money;//空瓶子
	//换的汽水
	//drink = 2*empty -1;
	while (empty >= 2)
	{
		drink += empty/2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", drink);

	return 0;
}