#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct S1
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int a;
};
struct S3
{
	double d;
	char c;
	int i;
};
//Ƕ�׽ṹ��
struct S4
{
	char c;
	struct S3 s3;
	double d;
};
int main()
{
	//�ṹ���ڴ����
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));//12
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//8
	struct S4 s4 ;
	printf("%d\n", sizeof(s4));// Ƕ�׽ṹ�� - 32
	return 0;
}
