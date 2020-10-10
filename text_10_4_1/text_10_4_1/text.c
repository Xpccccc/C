#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//´òÓ¡1¡ª100ËùÓÐ3µÄ±¶Êý
	int i = 0;
	for( i=1; i<=100; i++)
	{
		if( 0 == i%3)
		{
			printf("%d ",i);;
		}
	}
	return 0;
}
