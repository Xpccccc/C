#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define PRINT(X) printf("the value of "#X" is %d\n",X)
#define CAT(X,Y) X##Y
int main()
{
	//#��Ӧ��
	int a = 10;
	int b = 20;
	PRINT(a);
	//Ԥ����
	//printf("the value of ""a"" is %d\n",a);
	PRINT(b);
	//printf("the value of ""b"" is %d\n",b);


	//##��Ӧ��
	int Class12 = 2019;
	printf("%d ", CAT(Class, 12));
	//Ԥ����
	//printf("%d ", Class12);
	return 0;
}
