#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t num)  //numΪ�ֽڸ���
{
	void * ret = dest;//Ŀ����ʼ��ַ
	assert(dest != NULL);
	assert(src != NULL);

	//Ŀ���ַ�ڱ�������ʼ��ַǰ - ��ǰ���󿽱�
	if (dest < src)
	{
		while (num--) //����num���ֽ�
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
		
	}
	//Ŀ���ַ�ڱ�������ʼ��ַ�� - �Ӻ���ǰ����
	else
	{
		while (num--)
		{
			*(((char*)dest) + num) = *(((char*)src) + num);
		}
	}
	return ret;

}
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//  void * ret = dest;//Ŀ����ʼ��ַ
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--) //����num���ֽ�
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[5] = { 0 };
	//ģ��ʵ��memcpy
	//my_memcpy(arr2, arr1, sizeof(arr1)); //����ʵ���ڴ���ص�����

	//ģ��ʵ��memmove - ��ʵ���ڴ���ص�����
	my_memmove(arr1, arr1+2, 20);
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
