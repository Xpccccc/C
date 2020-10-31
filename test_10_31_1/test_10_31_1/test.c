#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)  
	{
		//������Ԫ�صĵ�ַָ����ַ�һ���ֽ�һ���ֽ���ȫ����
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//ð�������ʵ��
void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++) //  sz-1��
	{
		//ÿһ��
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//�Ƚϵ�ǰ�ͺ�һ��Ԫ�صĴ�С
			if ((cmp((char*)base + j*width, (char*)base + (j + 1)*width))>0)  //char*ֻ�ܷ���һ���ֽڣ����Լ�width�Ƿ�����һ��Ԫ��
			{
				//����
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width); 
				//��Ϊchar*ֻ�ܷ���һ���ֽ�,��ʵ��width��Ϊ���õ�ǰ�������͵�ÿ��Ԫ��������ֽ����ݶ������ʵ�������һ��Ԫ�ص�������ֽ����ݽ���
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
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);//ð������
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
	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);  //ʹ�ÿ⺯���Ƚ��ַ�������������
}

void test2()
{
	struct Stu s[] = { { "zhangsan", 30 }, { "lisi", 10 }, { "wangwu", 20 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);//ð������
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