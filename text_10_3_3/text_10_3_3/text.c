#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>  //Sleep()
#include <stdlib.h>   //system()

int main()
{
	//��ʾ����ַ��������ƶ������м���
	 char arr1[] = "welcome to bit!!!";
	 char arr2[] = "#################";
	 int left = 0;
	 int right = strlen(arr1)-1;
	 while(left <= right)
	 {
		 arr2[left] = arr1[left];
		 arr2[right] = arr1[right];
		 printf("%s\n",arr2);
		 //��Ϣһ��
		 Sleep(1000);
		 system("cls");// ִ��ϵͳ��һ�������cls -- ���
		 left++;
		 right--;
		
	 }
	 if(left > right)
	 {
		 printf("%s\n",arr2);
	 }
	return 0;
}