#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Choose(int n,int m )  // �������  
{						   //˳�������i��30��31��ʼ	
	int i = 0;
	for (i = n; i < 32; i += 2)
	{
		if (0 == ((m >> i) & 1))
		{
			printf("0 ");
		}
		else
			printf("1 ");
	}
	printf("\n");
}
void Print(int m)
{
	int i = 0;
	printf("ż��λ��");
	Choose(0,m);
	printf("\n");
	printf("����λ��");
	Choose(1,m);
}
int main()
{
	//�ֱ��ӡһ�����������Ƶ�����λ��ż��λ
	int m = 0;
	scanf("%d", &m);
	Print(m);
	return 0;
}
