#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�������������Լ��

int main()
{
	int a = 0;
	int b = 0;
	int r = 0;
	scanf("%d%d",&a,&b);
	while(r = a%b)
	{
		// r = a%b;
		 a = b;
		 b = r;
	}
	printf ("%d\n",b);
	return 0;
}