#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 0;
	printf("ÇëÊäÈëÒ»¸öÊý: ");
	scanf("%d",&a);
	if( 1 == a%2 )
	{
		printf("%dÊÇÆæÊý£¡\n",a);;
	}
	return 0;
}
