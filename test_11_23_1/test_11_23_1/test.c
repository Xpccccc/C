#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a=100;
	ps->c='w';
	ps->d=3.14;
}

//传值
void Print1(struct S tmp)
{
	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}

//传址
void Print2(const struct S* ps)  //const 防止数据被修改
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}

int main()
{
	
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);// 传址更好 - 传地址最多4个或者8个字节 - 传值的话结构体大小太大 ，压栈系统开销过大会导致性能发生下降
	return 0;
}