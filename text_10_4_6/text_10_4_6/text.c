#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��ӡ9*9�˷��ھ���

int main()
{
	int i = 0;
	int j = 0;
	//��ӡ9��
	for(i=1; i<=9; i++)
	{
		//��ӡ��
		for(j=1; j<=i; j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}