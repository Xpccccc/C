#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	//��Ϸ��ʵ��
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//�����ʼ��
	DisplayBoard(board, ROW, COL);//��ӡ����
	srand((unsigned int)time(NULL));//�����
	while (1)
	{	
		char ret = 0;
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж��Ƿ�Ӯ
		//���Ӯ  '*'
		//����Ӯ  '#'
		//ƽ��    'Q'
		//����    'C'
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else if (ret == 'Q')
		{
			printf("ƽ��\n");
		}
	}
}
void text()
{
	int input = 0;
	do
	{
		printf("**************************\n");
		printf("*****1.play   2.exit******\n");
		printf("**************************\n");
		printf("��ѡ��:>");
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