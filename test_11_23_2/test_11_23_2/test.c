#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("**************************************\n");
	printf("********* 1.add      2.del     *******\n");
	printf("********* 3.seach    4.modify  *******\n");
	printf("********* 5.show     6.sort    *******\n");
	printf("**************  0.exit  **************\n");
	printf("**************************************\n");
	printf("**************************************\n");
	printf("\n");

}

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;
	//通讯录初始化
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加
			AddContact(&con);
			break;
		case DEL:
			//删除
			DelContact(&con);
			break;
		case SEARCH:
			//查找
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			//修改
			break;
		case SHOW:
			//显示
			ShowConstact(&con);
			break;
		case SORT:
			//排序
			SortContact(&con);
			break;
		case EXIT:
			//退出
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
