#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//���ַ�������
int my_strlen(char* str)
{
	int count = 0;
	while ('\0' != *str)
	{
		str++;
		count++;
	}
	return count;
}

//���õݹ�

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	while (left < right)
//	{
//		char tmp = arr[left]; 
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//�õݹ�
void reverse_string(char* arr)
{
	char tmp =arr[0] ;
	int len = my_strlen(arr);  //abcdefg\0
	arr[0] = arr[len - 1];		   //gbcdefg\0
	arr[len - 1] = '\0';           //gbcdef\0\0
	if (my_strlen(arr + 1) >= 2) //���ַ�������С��2ʱ�ݹ����  //bcdef\0
	{
		reverse_string(arr + 1);
	}
	arr[len - 1] = tmp;            //gbcdefa\0
}
int main()
{
	//��дһ������reverse_string��char* string��ʹ�ַ������򣨵ݹ�ʵ�֣�
	//����ʹ��C���Ժ������е��ַ�����������
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}