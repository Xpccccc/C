#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>  //  rand()   srand()
#include <time.h>

void game()
{ 
	int num = 0;
	int guess = 0;
	printf("�뿪ʼ��ı��ݣ� ");
	scanf("%d",&guess);
	num = rand()%100+1;    //   �������1-100����
	//printf("%d\n",num);
	while(1)
	{
		scanf("%d",&guess);
		if(num < guess)
		{
			printf("�´���\n");
		}
		else if(num > guess)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n\n");
			break;
		}
	}
}

void menu()
{
	printf("**************************\n");
	printf("**** 1.play ** 0.exit ****\n");
}
//��������Ϸ

int main()
{
	int choose = 0;
	srand((unsigned int )time(NULL));    //��ʱ����������������������ʼ��
	do
	{
		menu();
		scanf("%d",&choose);
		switch(choose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}

	}while( choose );
	return 0 ;
}