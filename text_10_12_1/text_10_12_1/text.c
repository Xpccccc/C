#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

 void Hano(int n,char a,char b,char c)  //�������a����b���ƶ���c
{
	 if (1 == n)
	 {
		 printf("%c --> %c\n", a, c);//���ֻ��һ������ֻ��Ҫa�ƶ���c
	 }
	 else
	 {
		 Hano(n - 1, a, c, b);    // �Ȱ�a��ĵ�n-1������c�ƶ���b
		 printf("%c --> %c\n", a, c);  //��a������һ����a�ƶ���c
		 Hano(n - 1, b, a, c);   //�ٰ�b���n-1������a�ƶ���c
	 }

}

 
int main()
{
	//��ŵ������
	int n = 0;
	int num = 0;
	char a = 'A';
	char b = 'B';
	char c = 'C';
	//����n��ֵ
	scanf("%d", &n);
	Hano(n,a,b,c);
	return 0;
}