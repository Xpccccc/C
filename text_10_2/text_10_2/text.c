#define _CRT_SECURE_NO_WARNINGS

//���1��100֮�������
#include <stdio.h>
int main()
{
	//�ж�����
	int num = 1;
	while(num<=100)
	{
		if( 0 != num%2)
			printf("%d������\n",num);
		num++;
	
	}

	

	return 0;
}