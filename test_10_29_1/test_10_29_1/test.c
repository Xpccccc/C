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
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };    //��������ָ������ ���ú���ָ����ʺ�����ʵ�ֺ����Ĺ���
	int sz = sizeof(pfArr) / sizeof(pfArr[0])-1;    //  ����ָ�������С
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		if (input >= 1 && input <= sz)  //�ж��Ƿ�������ȷ
		{
			printf("������������������>");
			scanf("%d%d", &x, &y);   
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (0 == input)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	system("pause");
	return 0;
}