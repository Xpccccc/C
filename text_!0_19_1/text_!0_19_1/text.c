#define _CRT_SECURE_NO_WARNINGS 1

#define N_VALUES 5
#include <stdio.h>

int main()
{
	float values[N_VALUES];
	float *vp;
	//ָ��+-������ָ��Ĺ�ϵ����
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
	}
	return 0;
}


