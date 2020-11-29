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
	//ps->size = 0;//����ͨѶ¼���Ϊ0��Ԫ��
	ps->capacity = DEFAULT_SZ;//���Ĭ����ͨѶ¼ΪDEFAULT_SZ��
	ps->size=0;
}


void CheckCapacity(Contact* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		//����
		PeoInfo* ptr = (PeoInfo*)realloc(ps->data, (ps->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;//���ݺ�
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
void AddContact(struct Contact* ps)
{
	assert(ps != NULL);

	//�жϵ�ǰͨѶ¼�Ƿ�������
	CheckCapacity(ps);
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &ps->data[ps->size].age);
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
	/*if (ps->size == MAX)
	{
		printf("ͨѶ¼����,�޷����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &ps->data[ps->size].age);
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n"); 
	}*/
}


static int FindByName(const struct Contact*ps, char name[MAX_NAME])
{
	assert(ps != NULL);

	int i = 0;
	//����
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0) //�ҵ�
		{
			return i;
		}
	}
	return -1;//û�ҵ�
}

void DelContact(struct Contact* ps)
{
	assert(ps != NULL);

	//��������
	char name[MAX_NAME];
	printf("������Ҫɾ������ϵ������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1) //    >=0���±�
	{
		printf("û�ҵ�����ϵ��\n");
	}
	else
	{
		int j = 0;
		//ɾ�� - ���±�Ϊi��Ԫ����ǰ��һλ
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	assert(ps != NULL);

	//��������
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("û�ҵ�����ϵ��\n");
	}
	else
	{
		//��ʾ��ǰ�ҵ�����ϵ�˵���Ϣ
		printf("%-10s\t%-4s\t%-5s\t%-12s%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸ĵ���ϵ������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("û�ҵ�����ϵ��\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &ps->data[pos].age);
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}

void ShowConstact(const struct Contact* ps)
{
	assert(ps != NULL);

	if (0 == ps->size)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-10s\t%-4s\t%-5s\t%-12s%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//����
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

	//��������
	int i = 0;
	for (i = 0; i < ps->size-1; i++)
	{
		if (strcmp(ps->data[i].name, ps->data[i + 1].name) > 0)
		{
			//����
			struct PeoInfo tmp = ps->data[i];
			ps->data[i] = ps->data[i + 1];
			ps->data[i + 1] = tmp;
		}
	}
	ShowConstact(ps);
	printf("�������\n");
}

void DistoryContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
