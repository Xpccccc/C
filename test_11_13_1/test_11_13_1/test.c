#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main()
{
	//-128~127
	char a[1000] = { 0 };
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
		//-1 -2 -3 ...-128 127 126 ...1 0 -1 ..
	}
	printf("%d\n", strlen(a)); //255
	return 0;
}
