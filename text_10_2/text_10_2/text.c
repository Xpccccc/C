#define _CRT_SECURE_NO_WARNINGS

//输出1—100之间的奇数
#include <stdio.h>
int main()
{
	//判断奇数
	int num = 1;
	while(num<=100)
	{
		if( 0 != num%2)
			printf("%d是奇数\n",num);
		num++;
	
	}

	

	return 0;
}