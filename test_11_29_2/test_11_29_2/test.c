#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
	//FILE* pf = fopen("test.txt", "r");//���ļ�

	//д
	//FILE* pf = fopen("test.txt", "w"); //�ᴴ��һ���µ��ļ���ԭ����test�ļ�����ȫ������
	//
	//if (pf == NULL)
	//{
	//	//��ȡ�ļ�ʧ��
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////���ļ��ɹ�
	//fputc('b', pf);
	//fputc('i', pf);
	//fputc('t', pf);
	//fclose(pf);
	//pf = NULL;

	////���ļ�
	//FILE* pf = fopen("test.txt", "r"); //�ᴴ��һ���µ��ļ���ԭ����test�ļ�����ȫ������

	//if (pf == NULL)
	//{
	//	//��ȡ�ļ�ʧ��
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////���ļ��ɹ�
	//printf("%c", fgetc(pf));
	//printf("%c", fgetc(pf));
	//printf("%c", fgetc(pf));

	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;


	////�Ӽ�������
	////�������Ļ
	////����&��Ļ�����ⲿ�豸
	////
	////���� - �����豸 - stdin
	////��Ļ - ��׼����豸 - stdout
	////��һ������Ĭ�ϴ򿪵��������豸
	////
	////stdin FILE*
	////stdout FILE*
	////stderr FILE*
	//
	////fputc
	//int ch = fgetc(stdin);
	//fputc(ch,stdout);

	//fgetc
	FILE* pf = fopen("test.txt", "r"); //�ᴴ��һ���µ��ļ���ԭ����test�ļ�����ȫ������
	
	if (pf == NULL)
	{
		//��ȡ�ļ�ʧ��
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ��ɹ�
	//���ļ�
	char ch = fgetc(pf);
	printf("%c", ch);
	ch = fgetc(pf);
	printf("%c", ch);
	ch = fgetc(pf);
	printf("%c", ch);

	pf = NULL;
	return 0;
}
