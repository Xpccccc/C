#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//������
	//A:������
	//B:��C
	//C:��D
	//D:C�ں�˵
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) //������Ϊ��
		{
			printf("killer = %c\n", killer);
		}
	}
	
		
	return 0;
}
