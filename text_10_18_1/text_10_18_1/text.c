#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int fun()
{
	static int count = 0;
	return ++count;
}

//������ʽ

int main()
{
	int answer;
	answer = fun() - fun()*fun();//��ȷ���ȵ����ĸ�fun����
	printf("%d\n", answer);
	return 0;
}