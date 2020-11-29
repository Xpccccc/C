#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(struct Contact* ps)
{
	assert(ps != NULL);
	ps->data = (PeoInfo*)malloc(DEFAULT_SZ*sizeof(PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	//memset(ps->data, 0, sizeof(ps->data));
	//ps->size = 0;//设置通讯录最初为0个元素
	ps->capacity = DEFAULT_SZ;//最初默认满通讯录为DEFAULT_SZ个
	ps->size=0;
}


void CheckCapacity(Contact* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		//增容
		PeoInfo* ptr = (PeoInfo*)realloc(ps->data, (ps->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;//增容后
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}
void AddContact(struct Contact* ps)
{
	assert(ps != NULL);

	//判断当前通讯录是否满容量
	CheckCapacity(ps);
	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &ps->data[ps->size].age);
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
	/*if (ps->size == MAX)
	{
		printf("通讯录已满,无法添加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &ps->data[ps->size].age);
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n"); 
	}*/
}


static int FindByName(const struct Contact*ps, char name[MAX_NAME])
{
	assert(ps != NULL);

	int i = 0;
	//查找
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0) //找到
		{
			return i;
		}
	}
	return -1;//没找到
}

void DelContact(struct Contact* ps)
{
	assert(ps != NULL);

	//输入名字
	char name[MAX_NAME];
	printf("请输入要删除的联系人名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1) //    >=0是下标
	{
		printf("没找到该联系人\n");
	}
	else
	{
		int j = 0;
		//删除 - 从下标为i的元素往前移一位
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	assert(ps != NULL);

	//输入名字
	char name[MAX_NAME];
	printf("请输入要查找的联系人名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("没找到该联系人\n");
	}
	else
	{
		//显示当前找到的联系人的信息
		printf("%-10s\t%-4s\t%-5s\t%-12s%-30s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-10s\t%-4d\t%-5s\t%-12s%-30s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele, 
			ps->data[pos].addr);

	}

}

void ModifyContact(struct Contact* ps)
{
	assert(ps != NULL);

	char name[MAX_NAME];
	printf("请输入要修改的联系人名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("没找到该联系人\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &ps->data[pos].age);
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}

void ShowConstact(const struct Contact* ps)
{
	assert(ps != NULL);

	if (0 == ps->size)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-10s\t%-4s\t%-5s\t%-12s%-30s\n", "名字", "年龄", "性别", "电话", "地址");
		//数据
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s%-30s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele, 
				ps->data[i].addr);
		}
	}
}

void SortContact(struct Contact* ps)
{
	assert(ps != NULL);

	//名字排序
	int i = 0;
	for (i = 0; i < ps->size-1; i++)
	{
		if (strcmp(ps->data[i].name, ps->data[i + 1].name) > 0)
		{
			//交换
			struct PeoInfo tmp = ps->data[i];
			ps->data[i] = ps->data[i + 1];
			ps->data[i + 1] = tmp;
		}
	}
	ShowConstact(ps);
	printf("排序完成\n");
}

void DistoryContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
