#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//��*��ӡ����
	int i = 0;
	int n = 0;
	//�����ӡһ������
	scanf("%d", &n);
	//��һ����
	for (i = 0; i < n; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��һ����
	for (i = 0; i < n - 1 ; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * (n - 1 - i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************