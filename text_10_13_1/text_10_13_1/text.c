#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game() 
{
	//��Ϸ��ʵ��
	char board[ROW][COL] = {0};
	InitBoard(board,ROW,COL);//�����ʼ��
	DisplayBoard(board,ROW,COL);//��ӡ����
}
void text()
{
	int input = 0;
	do
	{
		printf("**************************\n");
		printf("*****1.play   2.exit******\n");
		printf("**************************\n");
		scanf("%d", &input);  //����1��ʼ��0�˳���Ϸ��������������
			switch (input)
			{
				case 1:
					game();
					break;
				case 0:
					printf("�˳���Ϸ\n");
					break;
				default:
					printf("�����������������\n");
					break;
			}
	} while (input);
}

int main()
{
	//������
	text();
	return 0;
}