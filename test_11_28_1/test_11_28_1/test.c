#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
struct S
{
	int n;
	int* arr; //��̬��ַ
};

int main()
{
	//ģ��ʵ����������
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int *)malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	int* ptr = realloc(ps->arr, 10 * sizeof(int)); //���¿����ڴ�
	if (ptr != NULL)
	{
		ps->arr = ptr;
		for (i = 5; i < 10; i++)
		{
			ps->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ",ps->arr[i]);
		}
	}
	free(ps);
	ps = NULL;
	free(ps->arr);
	ps->arr = NULL;
	return 0;
}
