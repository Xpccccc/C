#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
//#define MAX 1000

//最初默认满通讯录为DEFAULT_SZ个
#define DEFAULT_SZ 3

#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//枚举，便于调试
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

//通讯录人信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录类型
typedef struct Contact
{
	struct PeoInfo *data; //动态开辟内存大小
	int size;  //通讯录元素个数
	int capacity;//当前通讯录满容量
}Contact;

//声明函数
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowConstact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
void DistoryContact(Contact* ps);
void SaveContact(Contact* ps);
void LoadContact(Contact* ps);


