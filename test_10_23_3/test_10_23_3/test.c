#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//求字符串长度
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

//不用递归

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

//用递归
void reverse_string(char* arr)
{
	char tmp =arr[0] ;
	int len = my_strlen(arr);  //abcdefg\0
	arr[0] = arr[len - 1];		   //gbcdefg\0
	arr[len - 1] = '\0';           //gbcdef\0\0
	if (my_strlen(arr + 1) >= 2) //当字符串长度小于2时递归结束  //bcdef\0
	{
		reverse_string(arr + 1);
	}
	arr[len - 1] = tmp;            //gbcdefa\0
}
int main()
{
	//编写一个函数reverse_string（char* string）使字符串逆序（递归实现）
	//不能使用C语言函数库中的字符串操作函数
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}