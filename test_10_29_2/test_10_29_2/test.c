#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//����ʵ��

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int Xor(int x, int y)
{
	return x ^ y;
}

void menu()
{
	printf("******************************\n");
	printf("**** 1.�ӷ�     2.����********\n");
	printf("*****3.�˷�     4.����********\n");
	printf("*****5.���     0.�˳�********\n");
	printf("******************************\n");
}

//�ص�����

void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("��ѡ�������������>");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}
int main()
{
	int input = 0;
	//int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };    //����ָ������
	//int sz = sizeof(pfArr) / sizeof(pfArr[0]) - 1;    //  ����ָ�������С
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳�\n");
		case 1:
			Calc(Add); 
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 5:
			Calc(Xor);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
		
	} while (input);
	system("pause");
	return 0;
}