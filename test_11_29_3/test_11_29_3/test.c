#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	//char buf[1024] = { 0 };
	//FILE* pf = fopen("test.txt", "r");
	//if (pf == NULL)
	//{
	//	//���ļ�ʧ��
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////���ļ�
	//fgets(buf, 1024, pf);//fgets�Ƕ�ȡһ�У�����'\n'
	////printf("%s", buf); 
	//puts(buf);//puts - �Զ��ỻ��
	//fgets(buf, 1024, pf);
	//puts(buf);
	////printf("%s", buf);
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;
	//return 0;


	//char buf[1024] = { 0 };
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	//���ļ�ʧ��
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////д�ļ�
	//fputs("hello\n", pf);  //�����Զ�����
	//fputs("world\n", pf);
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;

	//�Ӽ��̶���һ����Ϣ
	char buf[1024] = { 0 };
	//fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
	gets(buf);
	//fputs(buf, stdout);    //�������׼�����
	puts(buf);
	return 0;
}
