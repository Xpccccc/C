#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//��ӡ1��100����3�ı���
	int i = 0;
	for( i=1; i<=100; i++)
	{
		if( 0 == i%3)
		{
			printf("%d ",i);
		}
	}
	return 0;
}