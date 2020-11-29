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
	//	//打开文件失败
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////读文件
	//fgets(buf, 1024, pf);//fgets是读取一行，包括'\n'
	////printf("%s", buf); 
	//puts(buf);//puts - 自动会换行
	//fgets(buf, 1024, pf);
	//puts(buf);
	////printf("%s", buf);
	////关闭文件
	//fclose(pf);
	//pf = NULL;
	//return 0;


	//char buf[1024] = { 0 };
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	//打开文件失败
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	////写文件
	//fputs("hello\n", pf);  //不会自动换行
	//fputs("world\n", pf);
	////关闭文件
	//fclose(pf);
	//pf = NULL;

	//从键盘读入一行信息
	char buf[1024] = { 0 };
	//fgets(buf, 1024, stdin);//从标准输入流读取
	gets(buf);
	//fputs(buf, stdout);    //输出到标准输出流
	puts(buf);
	return 0;
}
