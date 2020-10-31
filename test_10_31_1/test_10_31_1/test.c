#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)  
	{
		//将两个元素的地址指向的字符一个字节一个字节完全交换
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//冒泡排序的实现
void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++) //  sz-1趟
	{
		//每一趟
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//比较当前和后一个元素的大小
			if ((cmp((char*)base + j*width, (char*)base + (j + 1)*width))>0)  //char*只能访问一个字节，所以加width是访问下一个元素
			{
				//交换
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width); 
				//因为char*只能访问一个字节,传实参width是为了让当前数据类型的每个元素整体的字节内容都被访问到，与下一个元素的整体的字节内容交换
			}																	
		}
	}
}
int cmp_int(void* e1, void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}
void test1()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);//冒泡排序
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(void* e1, void* e2)
{
	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);  //使用库函数比较字符串，返回整形
}

void test2()
{
	struct Stu s[] = { { "zhangsan", 30 }, { "lisi", 10 }, { "wangwu", 20 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);//冒泡排序
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
	}
	printf("\n");
}
int main()
{
	test1();
	test2();
	return 0;
}