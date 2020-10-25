#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdlib.h>
//可优化

//int check_sys()
//{
//	int a = 1;            //00000000000000000000000000000001  
//	char* p = (char*)&a;  //强制类型转换 char* 只访问一个字节
//	//返回1，小端
//	//返回0，大端
//	if (1 == *p)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}

//可继续优化

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//返回1，小端
//	//返回0，大端
//	return *p;
//}

//完美

int check_sys()
{
	int a = 1;
	//返回1，小端
	//返回0，大端
	return *((char*)&a);
}

int main()
{
	//写一段代码告诉我们当前机器的字节序是什么
	//返回1，小端
	//返回0，大端
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	system("pause");
	return 0;
}