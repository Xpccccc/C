#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 //void qsort(void *base, size_t num, size_t width, int(__cdecl *compare)(const void *elem1, const void *elem2));

//整数冒泡排序
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

}

//浮点数冒泡排序
int cmp_float(const void* e1, const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2); //强制类型转换
}

void test2()
{
	float farr[] = { 6.0, 5.0, 4.0, 3.0, 2.0 };
	int sz = sizeof(farr) / sizeof(farr[0]);
	qsort(farr, sz, sizeof(farr[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", farr[i]);
	}
	printf("\n");

}


struct Stu
{
	char name[10];
	int age;
};

//结构体冒泡排序
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = { { "zhangsan", 30 }, { "lisi", 10 }, { "wangwu", 20 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name );;
	}
	printf("\n");

}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}
