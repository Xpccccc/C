#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//����ˮ ��һԪһƿ��ˮ��������ƿ���Ի�һƿ��ˮ��20����Ժȶ���ƿ��ˮ
	int money = 20; //Ǯ
	//���������ˮ�ȵ�
	int drink = money;//���Ժȵ�
	int empty = money;//��ƿ��
	//������ˮ
	//drink = 2*empty -1;
	while (empty >= 2)
	{
		drink += empty/2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", drink);

	return 0;
}