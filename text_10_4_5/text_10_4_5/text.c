#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//求十个数的最大值

int main()
{
	int i = 0;
	int arr[] = {-1,3,4,4,5,21,45,21,55,13};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int max = arr[0];
	for(i=1; i<sz; i++)
	{
		if(max < arr[i])
		{
			max=arr[i];
		}
	}
	printf("%d\n",max);
}









//int Max(int x,int y)
//{
//	if(x < y)
//	{
//		x=y;
//	}
//	return x;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int f = 0;
//	int g = 0;
//	int h = 0;
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&m,&n);
//	max = Max(Max(Max(Max(Max(Max(Max(Max(Max(a,b),c),d),e),f),g),h),m),n);
//	printf("%d\n",max);
//	return 0;
//}