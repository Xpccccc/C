#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//查真凶
	//A:不是我
	//B:是C
	//C:是D
	//D:C在胡说
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) //有三个为真
		{
			printf("killer = %c\n", killer);
		}
	}
	
		
	return 0;
}
