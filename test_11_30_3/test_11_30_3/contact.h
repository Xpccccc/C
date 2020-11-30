#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
//#define MAX 1000

//���Ĭ����ͨѶ¼ΪDEFAULT_SZ��
#define DEFAULT_SZ 3

#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//ö�٣����ڵ���
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

//ͨѶ¼����Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼����
typedef struct Contact
{
	struct PeoInfo *data; //��̬�����ڴ��С
	int size;  //ͨѶ¼Ԫ�ظ���
	int capacity;//��ǰͨѶ¼������
}Contact;

//��������
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


