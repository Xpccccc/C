#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdlib.h>
//���Ż�

//int check_sys()
//{
//	int a = 1;            //00000000000000000000000000000001  
//	char* p = (char*)&a;  //ǿ������ת�� char* ֻ����һ���ֽ�
//	//����1��С��
//	//����0�����
//	if (1 == *p)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}

//�ɼ����Ż�

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//����1��С��
//	//����0�����
//	return *p;
//}

//����

int check_sys()
{
	int a = 1;
	//����1��С��
	//����0�����
	return *((char*)&a);
}

int main()
{
	//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
	//����1��С��
	//����0�����
	int ret = check_sys();
	if (1 == ret)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	system("pause");
	return 0;
}