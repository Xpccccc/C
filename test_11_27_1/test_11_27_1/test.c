#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
struct S
{
	int n;
	int arr[];//未知大小的 - 柔性数组成员数组大小可调整
};
int main()
{
	struct S* ps = (struct S*) malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	//重新分配内存
	struct S* ptr = realloc(ps, 44); //申请的内存一定要足够 -- 不然程序崩溃
	if (ptr != NULL)
	{
		ps = ptr;
		for (i = 5; i < 10; i++)
		{
			ps->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", ps->arr[i]);
		}
	}
	
	free(ps);
	ps = NULL;
	return 0;
}
