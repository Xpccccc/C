#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//����Sn=a+aa+aaa+aaaa+aaaaa+...  a��һ������
	int S = 0;
	int a = 0;
	int n = 0;
	int ret = 0;
	int i = 0;
	scanf("%d%d", &a,&n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * 10 + a;
		S += ret;
	}
	printf("%d\n", S);
	return 0;
}
