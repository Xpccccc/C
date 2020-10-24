#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//结构体
typedef struct Stu
{
	char name[20];
	int age;
	char sex[5];
}Stu;

void Print(Stu* p)
{
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	printf("%s\n", p->sex);
}

int main()
{
	Stu s = { "张三", 18, "保密" };
	Print(&s);
	return 0;
}