#include<stdio.h>

//main前面的int表示函数调用返回一个整型值
int main()//主函数-程序的入口
{
	double d = 3.14;
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(double));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));;
	return 0;//返回 0，与 int 配套
}
