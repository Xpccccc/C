#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

 void Hano(int n,char a,char b,char c)  //这里代表a借助b柱移动到c
{
	 if (1 == n)      //递归出口
	 {
		 printf("%c --> %c\n", a, c);//如果只有一个，那只需要a移动到c
	 }
	 else
	 {
		 Hano(n - 1, a, c, b);    // 先把a里的第n-1个借助c移动到b
		 printf("%c --> %c\n", a, c);  //把a里的最后一个从a移动到c
		 Hano(n - 1, b, a, c);   //再把b里的n-1个借助a移动到c
	 }

}

 
int main()
{
	//汉诺塔问题
	int n = 0;
	int num = 0;
	char a = 'A';
	char b = 'B';
	char c = 'C';
	//输入n的值
	scanf("%d", &n);
	Hano(n,a,b,c);
	return 0;
}
