#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Fib(int n)
{
	//�ݹ鲻�ʺ���쳲���������������̫��
	/*if( n<=2 )
		return 1;
	else
		return Fib(n-1)+Fib(n-2);*/

	//��forѭ����

	int a = 1;
	int b = 1;
	int c = 1;//��n<=2ʱ��쳲�������Ϊһ
	while( n>2 )
	{
		c = a+b;
		a = b;
		b = c;
		n--;//����һ�μ�һ����4��Ҫ����2�Σ�5��Ҫ3�Σ����������whileѭ��
	}
	return c;

}

int main()
{
	//���n��쳲�������
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf ("ret = %d",ret);
	return 0;
}