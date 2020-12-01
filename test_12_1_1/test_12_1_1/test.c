#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//写日志文件
	int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("log.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "function:%s   file:%s   line:%d   date:%s   time:%s   i=%d\n", __FUNCTION__,__FILE__, __LINE__, __DATE__, __TIME__, i);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
