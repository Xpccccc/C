#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>




//  可以优化

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


// 不利于发现问题
// 直接规避问题，不会报错
//可以继续优化

//void mystrcpy(char* dest, char*src)
//{
//	if (*dest != NULL&&*src != NULL)  //防止传空指针
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//	
//}

//还可以继续优化

//void my_strcpy(char* dest, char*src)
//{
//	assert(dest != NULL);    // 出现问题有利于发现问题
//	assert(src != NULL);     // 传空指针会报错
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

char* my_strcpy(char* dest, const char*src)  //返回地址
{
	assert(dest != NULL);    // 出现问题有利于发现问题
	assert(src != NULL);     // 传空指针会报错

	char* ret = dest;
	while (*dest++ = *src++)  //const 防止写反
	{
		;
	}
	return ret; //返回已改好数据的目标的首地址    // printf("%s\n", 地址);
}


int main()
{
	char arr1[] = { "###################" };
	char arr2[] = { "bit" };

	//my_strcpy(arr1,NULL); 

	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}



