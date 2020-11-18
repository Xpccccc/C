#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;//Ä¿±ê×Ö·û´®µØÖ·
	//1.Ä¿µÄ×Ö·û´®ÏÈÕÒµ½'\0'
	while (*dest != '\0')
		dest++;
	//2.×Ö·û´®¿½±´ -- ×·¼Ó
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	//×Ö·û´®×·¼Óº¯Êý
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
