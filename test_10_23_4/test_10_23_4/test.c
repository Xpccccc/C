#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int DigitSum(int num)
{
	//DigitSum(1729)
	//DigitSum(172)+1729%10
	//17        2
	//DigitSum(1)+17%10 +.... 
	//       1(num)
	if (num > 9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else
		return num;  //һλ��
	
}
int main()
{
	//����һ�������������������ĸ�λ���֮��
	unsigned int num = 0;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("sum=%d\n", ret);
	return 0;
}