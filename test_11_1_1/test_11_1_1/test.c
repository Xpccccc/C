#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	//����������Ԫ�ص�ַ
	//1.sizeof(������) - �����ʾ��������
	//2.&������ - ��������ʾ��������
	//һά����
	int a[] = { 1, 2, 3, 4 };//4*4 = 16

	//sizeof
	printf("%d\n", sizeof(a));//sizeof(������) - ������������ܴ�С - ��λ���ֽ� - 16
	printf("%d\n", sizeof(a + 0));//4/8 - �����������ʾ��Ԫ�ص�ֵ ��a+0������Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*a));//4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
	printf("%d\n", sizeof(a + 1));//4/8 - �����������ʾ��Ԫ�ص�ֵ ��a+1������Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(a[1]));//4 - ��2��Ԫ�صĴ�С
	printf("%d\n", sizeof(&a));//4/8 - &aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ
	printf("%d\n", sizeof(*&a));//16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С
	printf("%d\n", sizeof(&a + 1));//4/8 - &a������ĵ�ַ��&a+1��Ȼ�����������飬�����ǵ�ַ
	printf("%d\n", sizeof(&a[0]));//4/8 - &a[0]�ǵ�1��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0] + 1)); // 4/8 - &a[0]�ǵ�2��Ԫ�صĵ�ַ

	printf("----------------------------------------\n");

	//�ַ�����
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//sizeof
	printf("%d\n", sizeof(arr)); //sizeof������������С ��6*1 = 6�ֽ�
	printf("%d\n", sizeof(arr + 0));// 4/8 - arr����Ԫ�صĵ�ַ ��arr+0������Ԫ�صĵ�ַ ����ַ�Ĵ�С��4/8�ֽ�
	printf("%d\n", sizeof(*arr));//1 - arr����Ԫ�صĵ�ַ ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
	printf("%d\n", sizeof(arr[1])); //1
	printf("%d\n", sizeof(&arr)); //&arr������ĵ�ַ
	printf("%d\n", sizeof(&arr + 1));//��ַ��С
	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ

	printf("----------------------------------------\n");


	//strlen
	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ

	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err


	//strlen������ʵ�ֵ�һ��������const char* 

	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ-6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1

	printf("----------------------------------------\n");


	char arr1[] = "abcdef";

	//strlen
	printf("%d\n", strlen(arr1));//6
	printf("%d\n", strlen(arr1 + 0));//6
	//printf("%d\n", strlen(*arr1));//err
	//printf("%d\n", strlen(arr1[1]));//err
	printf("%d\n", strlen(&arr1));// 6 - ����ĵ�ַ - ����ָ�� char(*p)[7] = &arr1
	printf("%d\n", strlen(&arr1 + 1));//���ֵ
	printf("%d\n", strlen(&arr1[0] + 1));//5

	printf("----------------------------------------\n");


	char* p = "abcdef";

	//sizeof
	printf("%d\n", sizeof(p));//4/8 - ����ָ�����p�Ĵ�С
	printf("%d\n", sizeof(p + 1));//4/8 - p+1�õ������ַ�b�ĵ�ַ
	printf("%d\n", sizeof(*p));//1 - *p �����ַ����ĵ�һ���ַ� - 'a'
	printf("%d\n", sizeof(p[0]));// 1 - int [10]; arr[0] == *(arr + 0)   p[0] == *(p + 0) == 'a'
	printf("%d\n", sizeof(&p));//4/8 - ��ַ
	printf("%d\n", sizeof(&p + 1));//4/8 - ��ַ
	printf("%d\n", sizeof(&p[0] + 1));//4/8 - ��ַ

	printf("----------------------------------------\n");


	//strlen
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5

	return 0;;
}
