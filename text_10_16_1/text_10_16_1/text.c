#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	//����һ����������
	//��ʼ�����̴�С����ʾ����Ҫ��һȦ��������㵱ǰλ����Χ�˸�λ�õ��׵ĸ���
	char mine[ROWS][COLS] = { 0 };
	//����һ��������ʾ�׵�����
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	//��ʾ��ǰλ�ø����׵ĸ���
	FindMine(mine, show, ROW, COL);
}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��ʱ��������������
	//�ж�����
	do
	{   
		printf("��ѡ��>");
		scanf("%d", &input);
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

void menu()
{
	printf("*******************************\n");
	printf("*******1.play  0.exit**********\n");
	printf("*******************************\n");

}

int main()
{
	//ɨ����Ϸ
	menu();//��ӡѡ���Ƿ�����Ϸ
	text();

	return 0;
}
