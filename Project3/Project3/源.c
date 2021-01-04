#define _CRT_SECURE_NO_WARNINGS 1

#define LENGTH_ENGLISH 100
#define LENGTH_CHINESE 100
//���Ĭ�ϴʻ�����Ϊ3��
#define DEFAULT_SIZE 3
//һ�������ӵ��ʸ���
#define COUNT_MAX 5


#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <windows.h>
#include <time.h>

//ʹ��ö������
enum
{
	Exit,//�˳�
	Add,//���
	Mod,//�޸�
	View,//�鿴
	Del,//ɾ��
	Search,//����
	Study//ѧϰ
};

//���ʽṹ��
typedef struct Words
{
	char english[LENGTH_ENGLISH];//Ӣ��
	char chinese[LENGTH_CHINESE];//����

}Words;

//�ʻ��
typedef struct Vocabulary
{
	struct Words *data;//��̬�����ڴ��С
	int size;//���ʸ���
	int capacity;//�ʻ��������
}Vocabulary;

void menu()
{
	printf("******************************\n");
	printf("*****1.add        2.mod*******\n");
	printf("*****3.view       4.del*******\n");
	printf("*****5.search     6.study*****\n");
	printf("*******  0.exit  *************\n");
	printf("******************************\n");
}


//��������
void InitWords(Words *ps);
void LoadContact(Vocabulary *ps);
void CheckCapacity(Vocabulary* ps);
void AddVocabulary(Vocabulary *ps);
void ViewVocabulary(const Vocabulary* ps);
void SaveVocabulary(Vocabulary* ps);
void ModifyVocabulary(Vocabulary* ps);
void DeleteVocabulary(Vocabulary* ps);
void SearchVocabulary(const Vocabulary* ps);
void StudyVocabulary(const Vocabulary* ps);



/*����ʵ��*/

//ѧϰ����
void StudyVocabulary(const Vocabulary* ps)
{
	int numStudy;
	int score = 0;
	srand((unsigned)time(NULL));//��ʱ������������
	printf("������Ҫѧϰ�ĵ�������");
	scanf("%d", &numStudy);
	//���Ҫѧϰ�ĵ����������ܵ�����
	while (numStudy > ps->size){
		printf("��%d�����ʣ����������룺", ps->size);
		scanf("%d", &numStudy);
	}
	int numChoose;
	printf("��ѡ����Է�����\n1��������Ӣ��\n2�������Ժ���\n");
	scanf("%d", &numChoose);
	if (numChoose == 1)
	{
		int i = 0;
		while (i < numStudy){
			int random = rand() % (numStudy + 1);//�������Ϊ�±�
			printf("Ӣ����:%s\n�����뺺�", ps->data[random].english);
			char str[LENGTH_ENGLISH];
			scanf("%s", str);
			i++;
			if (strcmp(ps->data[random].chinese, str) == 0){
				printf("��ϲ��������ˣ�\n");
				score += 100 / numStudy;
			}
			else
				printf("���ź�������ˣ���ȷ����%s\n", ps->data[random].chinese);
		}
	}
	else if (numChoose == 2)
	{
		int i = 0;
		while (i < numStudy){
			int random = rand() % (numStudy + 1);//�������Ϊ�±�
			printf("������:%s\n������Ӣ�", ps->data[random].chinese);
			char str[LENGTH_CHINESE];
			scanf("%s", str);
			i++;
			if (strcmp(ps->data[random].english, str) == 0){
				printf("��ϲ��������ˣ�\n");
				score += 100 / numStudy;
			}
			else
				printf("���ź�������ˣ���ȷ����%s\n", ps->data[random].english);
		}
	}
	if (score <= 100 && score >= 90)
		printf("���㣡��������֣�\n");
	else if (score <= 75 && score<90)
		printf("���ã���������ͣ�\n");
	else if (score <= 60 && score<75)
		printf("����Ҫ�����ˣ�\n");
	else if (score <= 0 && score<60)
		printf("�����񣡺ú�Ŭ����\n");
	Sleep(2000);

}


//�ҵ���
static int FindByEnglish(const Vocabulary*ps, char english[LENGTH_ENGLISH])
{
	assert(ps != NULL);

	int i = 0;
	//����
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].english, english) == 0) //�ҵ�
		{
			return i;
		}
	}
	return -1;//û�ҵ�
}

//�鵥���Ӻ���(��װ)
void Find(char* words, const Vocabulary* ps)
{
	scanf("%s", words);
	int pos = FindByEnglish(ps, words);
	if (-1 == pos)
	{
		printf("û�ҵ��õ���\n");
	}
	else
	{
		//��ʾ��ǰ�ҵ��ĵ��ʵ���Ϣ
		printf("%-8s\t%-8s\n", "Ӣ��", "����");
		printf("%-8s\t%-8s\n",
			ps->data[pos].english,
			ps->data[pos].chinese);
	}
}

//�鵥��
void SearchVocabulary(const Vocabulary* ps)
{
	assert(ps != NULL);

	//���뵥��
	char english[LENGTH_ENGLISH];
	char chinese[LENGTH_CHINESE];
	int input = 0;
	do
	{
		printf("������Ҫ���ҵĵ���:>1.Ӣ�� 2.����");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Find(english, ps);
			break; 
		case 2:
			Find(chinese, ps);
				break;
		default:
			printf("�������,����������\n");
		}
	} while (input);
	
}

//ɾ������
void DeleteVocabulary(Vocabulary* ps)
{
	assert(ps != NULL);

	//���뵥��
	char english[LENGTH_ENGLISH];
	printf("������Ҫɾ���ĵ���:>");
	scanf("%s", english);
	int pos = FindByEnglish(ps, english);
	if (pos == -1) //    >=0���±�
	{
		printf("û�ҵ��õ���\n");
	}
	else
	{
		printf("ȷ��ɾ����1.�� ��1����\n");
		int input = 0;
		scanf("%d", &input);
		if (input == 1);
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
}

//�޸ĵ���
void ModifyVocabulary(Vocabulary* ps)
{
	assert(ps != NULL);

	char english[LENGTH_ENGLISH];
	printf("������Ҫ�޸ĵĵ���:>");
	scanf("%s", english);
	int pos = FindByEnglish(ps, english);
	if (-1 == pos)
	{
		printf("û�ҵ��õ���\n");
	}
	else
	{
		printf("������Ӣ��:>");
		scanf("%s", ps->data[pos].english);
		printf("�����뺺��:>");
		scanf("%s", ps->data[pos].chinese);
		printf("�޸ĳɹ�\n");
	}
}

//�鿴�ʻ��
void ViewVocabulary(const Vocabulary* ps)
{
	assert(ps != NULL);
	//��ĸ����
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		if (strcmp(ps->data[i].english, ps->data[i + 1].english) < 0)
		{
			//����
			Words tmp = ps->data[i];
			ps->data[i] = ps->data[i + 1];
			ps->data[i + 1] = tmp;
		}
	}

	if (0 == ps->size)
	{
		printf("�ʻ��Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-8s\t%-8s\n", "Ӣ��", "����");
		//����
		for (i = 0; i < ps->size; i++)
		{
			printf("%-8s\t%-8s\n",
				ps->data[i].english,
				ps->data[i].chinese);
		}
	}
	
}

//���ӵ����Ӻ���(��װ)
void AddWords(Vocabulary *ps)
{
	//�жϵ�ǰͨѶ¼�Ƿ�������
	CheckCapacity(ps);
	printf("������Ӣ��:>");
	scanf("%s", ps->data[ps->size].english);
	//�������ĵ�����ͬ
	//...
	printf("����������:>");
	scanf("%s", ps->data[ps->size].chinese);
	ps->size++;
	printf("��ӳɹ�\n");
}

//���ӵ���
void AddVocabulary(Vocabulary *ps)
{
	assert(ps != NULL);
	int count = 0;
	while (1)
	{
		//����ӵ�10�����ʵ�ʱ��ѯ���Ƿ�Ҫ�������
		if (count == COUNT_MAX)
		{
			int add = 0;
			printf("�Ƿ������ӣ�1.�� ��1.��\n");
			scanf("%d", &add);
			if (add == 1)
			{
				AddWords(ps);
				count++;
			}
			else
			{
				break;
			}
		}
		AddWords(ps);
		count++;
	}
}

//��ȡ�ļ��ŵ��ʻ����
void LoadVocabulary(Vocabulary *ps)
{
	Words tmp = { 0 };
	FILE* pfRead = fopen("vocabulary.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadVocabulary::%s\n", strerror(errno));
	}

	//��ȡ�ļ��Ĵʻ���б�
	while (fread(&tmp, sizeof(Words), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}

//��ʼ���ʻ��
void InitVocabulary(Vocabulary *ps)
{
	assert(ps != NULL);//�����ָ��
	//���ʻ��̬�����ڴ�
	ps->data = (Words*)malloc(DEFAULT_SIZE*sizeof(Words));
	if (ps->data == NULL)//δ��������
	{
		return;
	}
	ps->capacity = DEFAULT_SIZE;//���Ĭ�����ʻ��ĵ��ʸ���ΪDEFAULT_SZ��
	ps->size = 0;

	//���شʻ��
	LoadVocabulary(ps);
}

//����ʻ���ļ�
void SaveVocabulary(Vocabulary* ps)
{
	FILE* pfWrite = fopen("vocabulary.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveVocabulary::%s\n", strerror(errno));
		return;
	}
	//д�ʻ������ݵ��ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(Words), 1, pfWrite);
	}

	fclose(pfWrite);
	pfWrite = NULL;
}

//���ʻ���Ƿ�������
void CheckCapacity(Vocabulary* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		//����
		Words* ptr = (Words*)realloc(ps->data, (ps->capacity + 2)*sizeof(Words));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;//���ݺ�
		}
		
	}
}

void test()
{
	int input = 0;
	//�����ʻ��
	Vocabulary voc;
	//�ʻ���ʼ��
	InitVocabulary(&voc);
	do
	{
		printf("��ѡ��:>");
		scanf("%d", &input);//����ѡ��
		switch (input)
		{
		case Add:
			AddVocabulary(&voc);
			break;
		case Mod:
			ModifyVocabulary(&voc);
			break;
		case View:
			ViewVocabulary(&voc);
			break;
		case Del:
			DeleteVocabulary(&voc);
			break;
		case Search:
			SearchVocabulary(&voc);
			break;
		case Study:
			StudyVocabulary(&voc);
			break;
		case Exit:
			SaveVocabulary(&voc);//�˳�ʱ����ʻ��
			printf("�˳�\n");
			Sleep(1000);//˯��һ��
			break;
		default:
			printf("ѡ�����,����������\n");
		}
	} while (input);
}
int main()
{
	menu();//�˵�
	test();
	return 0;
}


