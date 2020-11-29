#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
	//FILE* pf = fopen("test.txt", "r");//读文件

	//写
	//FILE* pf = fopen("test.txt", "w"); //会创建一个新的文件，原来的test文件内容全部销毁
	//
	//if (pf == NULL)
	//{
	//	//读取文件失败
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////打开文件成功
	//fputc('b', pf);
	//fputc('i', pf);
	//fputc('t', pf);
	//fclose(pf);
	//pf = NULL;

	////读文件
	//FILE* pf = fopen("test.txt", "r"); //会创建一个新的文件，原来的test文件内容全部销毁

	//if (pf == NULL)
	//{
	//	//读取文件失败
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////打开文件成功
	//printf("%c", fgetc(pf));
	//printf("%c", fgetc(pf));
	//printf("%c", fgetc(pf));

	////关闭文件
	//fclose(pf);
	//pf = NULL;


	////从键盘输入
	////输出到屏幕
	////键盘&屏幕都是外部设备
	////
	////键盘 - 输入设备 - stdin
	////屏幕 - 标准输出设备 - stdout
	////是一个程序默认打开的两个流设备
	////
	////stdin FILE*
	////stdout FILE*
	////stderr FILE*
	//
	////fputc
	//int ch = fgetc(stdin);
	//fputc(ch,stdout);

	//fgetc
	FILE* pf = fopen("test.txt", "r"); //会创建一个新的文件，原来的test文件内容全部销毁
	
	if (pf == NULL)
	{
		//读取文件失败
		printf("%s\n", strerror(errno));
		return 0;
	}
	//打开文件成功
	//读文件
	char ch = fgetc(pf);
	printf("%c", ch);
	ch = fgetc(pf);
	printf("%c", ch);
	ch = fgetc(pf);
	printf("%c", ch);

	pf = NULL;
	return 0;
}
