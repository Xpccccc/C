#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char arr[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("���Խ���һ���Ӻ�ػ������ȡ������˵������\n������>: ");
	scanf("%s",&arr);
	if (strcmp("������",arr) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
}

