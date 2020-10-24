#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>




//  �����Ż�

//void mystrcpy(char* dest, char*src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		*src++;
//	}
//	*dest = *src;   //'\0'
//}


// �����ڷ�������
// ֱ�ӹ�����⣬���ᱨ��
//���Լ����Ż�

//void mystrcpy(char* dest, char*src)
//{
//	if (*dest != NULL&&*src != NULL)  //��ֹ����ָ��
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//	
//}

//�����Լ����Ż�

//void my_strcpy(char* dest, char*src)
//{
//	assert(dest != NULL);    // �������������ڷ�������
//	assert(src != NULL);     // ����ָ��ᱨ��
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

char* my_strcpy(char* dest, const char*src)  //���ص�ַ
{
	assert(dest != NULL);    // �������������ڷ�������
	assert(src != NULL);     // ����ָ��ᱨ��

	char* ret = dest;
	while (*dest++ = *src++)  //const ��ֹд��
	{
		;
	}
	return ret; //�����Ѹĺ����ݵ�Ŀ����׵�ַ    // printf("%s\n", ��ַ);
}


int main()
{
	char arr1[] = { "###################" };
	char arr2[] = { "bit" };

	//my_strcpy(arr1,NULL); 

	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}



