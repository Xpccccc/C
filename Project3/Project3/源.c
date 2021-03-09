#define _CRT_SECURE_NO_WARNINGS 1

#define LENGTH_ENGLISH 100
#define LENGTH_CHINESE 100
//最初默认词汇表最多为3个
#define DEFAULT_SIZE 3
//一次最多添加单词个数
#define COUNT_MAX 5

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <windows.h>
#include <time.h>

//使用枚举类型
enum
{
	Exit,//退出
	Add,//添加
	Mod,//修改
	View,//查看
	Del,//删除
	Search,//查找
	Study//学习
};

//单词结构体
typedef struct Words
{
	char english[LENGTH_ENGLISH];//英文
	char chinese[LENGTH_CHINESE];//中文

}Words;

//词汇表
typedef struct Vocabulary
{
	struct Words *data;//动态开辟内存大小
	int size;//单词个数
	int capacity;//词汇表满容量
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


//声明函数
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

/*函数实现*/

//学习单词
void StudyVocabulary(const Vocabulary* ps)
{
	int numStudy;
	int score = 0;
	srand((unsigned)time(NULL));//用时间戳产生随机数
	printf("请输入要学习的单词数：");
	scanf("%d", &numStudy);
	//如果要学习的单词数大于总单词数
	while (numStudy > ps->size){
		printf("共%d个单词，请重新输入：", ps->size);
		scanf("%d", &numStudy);
	}
	int numChoose;
	printf("请选择测试方案：\n1——测试英语\n2——测试汉语\n");
	scanf("%d", &numChoose);
	if (numChoose == 1)
	{
		int i = 0;
		while (i < numStudy){
			int random = rand() % (numStudy + 1);//随机数作为下标
			printf("英文是:%s\n请输入汉语：", ps->data[random].english);
			char str[LENGTH_ENGLISH];
			scanf("%s", str);
			i++;
			if (strcmp(ps->data[random].chinese, str) == 0){
				printf("恭喜您，答对了！\n");
				score += 100 / numStudy;
			}
			else
				printf("很遗憾，答错了！正确答案是%s\n", ps->data[random].chinese);
		}
	}
	else if (numChoose == 2)
	{
		int i = 0;
		while (i < numStudy){
			int random = rand() % (numStudy + 1);//随机数作为下标
			printf("汉语是:%s\n请输入英语：", ps->data[random].chinese);
			char str[LENGTH_CHINESE];
			scanf("%s", str);
			i++;
			if (strcmp(ps->data[random].english, str) == 0){
				printf("恭喜您，答对了！\n");
				score += 100 / numStudy;
			}
			else
				printf("很遗憾，答错了！正确答案是%s\n", ps->data[random].english);
		}
	}
	if (score <= 100 && score >= 90)
		printf("优秀！请继续保持！\n");
	else if (score <= 75 && score<90)
		printf("良好！请继续加油！\n");
	else if (score <= 60 && score<75)
		printf("及格！要加油了！\n");
	else if (score <= 0 && score<60)
		printf("不及格！好好努力！\n");
	Sleep(2000);

}

//找单词
static int FindByEnglish(const Vocabulary*ps, char english[LENGTH_ENGLISH])
{
	assert(ps != NULL);

	int i = 0;
	//查找
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].english, english) == 0) //找到
		{
			return i;
		}
	}
	return -1;//没找到
}

//查单词子函数(封装)
void Find(char* words, const Vocabulary* ps)
{
	scanf("%s", words);
	int pos = FindByEnglish(ps, words);
	if (-1 == pos)
	{
		printf("没找到该单词\n");
	}
	else
	{
		//显示当前找到的单词的信息
		printf("%-8s\t%-8s\n", "英文", "中文");
		printf("%-8s\t%-8s\n",
			ps->data[pos].english,
			ps->data[pos].chinese);
	}
}

//查单词
void SearchVocabulary(const Vocabulary* ps)
{
	assert(ps != NULL);

	//输入单词
	char english[LENGTH_ENGLISH];
	char chinese[LENGTH_CHINESE];
	int input = 0;
	do
	{
		printf("请输入要查找的单词:>1.英文 2.中文");
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
			printf("输入错误,请重新输入\n");
		}
	} while (input);
	
}

//删除单词
void DeleteVocabulary(Vocabulary* ps)
{
	assert(ps != NULL);

	//输入单词
	char english[LENGTH_ENGLISH];
	printf("请输入要删除的单词:>");
	scanf("%s", english);
	int pos = FindByEnglish(ps, english);
	if (pos == -1) //    >=0是下标
	{
		printf("没找到该单词\n");
	}
	else
	{
		printf("确定删除吗？1.是 非1：否\n");
		int input = 0;
		scanf("%d", &input);
		if (input == 1);
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
}

//修改单词
void ModifyVocabulary(Vocabulary* ps)
{
	assert(ps != NULL);

	char english[LENGTH_ENGLISH];
	printf("请输入要修改的单词:>");
	scanf("%s", english);
	int pos = FindByEnglish(ps, english);
	if (-1 == pos)
	{
		printf("没找到该单词\n");
	}
	else
	{
		printf("请输入英语:>");
		scanf("%s", ps->data[pos].english);
		printf("请输入汉语:>");
		scanf("%s", ps->data[pos].chinese);
		printf("修改成功\n");
	}
}

//查看词汇表
void ViewVocabulary(const Vocabulary* ps)
{
	assert(ps != NULL);
	//字母排序
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		if (strcmp(ps->data[i].english, ps->data[i + 1].english) < 0)
		{
			//交换
			Words tmp = ps->data[i];
			ps->data[i] = ps->data[i + 1];
			ps->data[i + 1] = tmp;
		}
	}

	if (0 == ps->size)
	{
		printf("词汇表为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-8s\t%-8s\n", "英文", "中文");
		//数据
		for (i = 0; i < ps->size; i++)
		{
			printf("%-8s\t%-8s\n",
				ps->data[i].english,
				ps->data[i].chinese);
		}
	}
	
}

//增加单词子函数(封装)
void AddWords(Vocabulary *ps)
{
	//判断当前通讯录是否满容量
	CheckCapacity(ps);
	printf("请输入英文:>");
	scanf("%s", ps->data[ps->size].english);
	//如果输入的单词相同
	//...
	printf("请输入中文:>");
	scanf("%s", ps->data[ps->size].chinese);
	ps->size++;
	printf("添加成功\n");
}

//增加单词
void AddVocabulary(Vocabulary *ps)
{
	assert(ps != NULL);
	int count = 0;
	while (1)
	{
		//当添加到10个单词的时候询问是否要继续添加
		if (count == COUNT_MAX)
		{
			int add = 0;
			printf("是否继续添加？1.是 非1.否\n");
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

//读取文件放到词汇表中
void LoadVocabulary(Vocabulary *ps)
{
	Words tmp = { 0 };
	FILE* pfRead = fopen("vocabulary.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadVocabulary::%s\n", strerror(errno));
	}

	//读取文件的词汇表列表
	while (fread(&tmp, sizeof(Words), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}

//初始化词汇表
void InitVocabulary(Vocabulary *ps)
{
	assert(ps != NULL);//避免空指针
	//给词汇表动态分配内存
	ps->data = (Words*)malloc(DEFAULT_SIZE*sizeof(Words));
	if (ps->data == NULL)//未分配的情况
	{
		return;
	}
	ps->capacity = DEFAULT_SIZE;//最初默认满词汇表的单词个数为DEFAULT_SZ个
	ps->size = 0;

	//加载词汇表
	LoadVocabulary(ps);
}

//保存词汇表到文件
void SaveVocabulary(Vocabulary* ps)
{
	FILE* pfWrite = fopen("vocabulary.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveVocabulary::%s\n", strerror(errno));
		return;
	}
	//写词汇表的数据到文件中
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(Words), 1, pfWrite);
	}

	fclose(pfWrite);
	pfWrite = NULL;
}

//检查词汇表是否满单词
void CheckCapacity(Vocabulary* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		//增容
		Words* ptr = (Words*)realloc(ps->data, (ps->capacity + 2)*sizeof(Words));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;//增容后
		}
		
	}
}

void test()
{
	int input = 0;
	//创建词汇表
	Vocabulary voc;
	//词汇表初始化
	InitVocabulary(&voc);
	do
	{
		printf("请选择:>");
		scanf("%d", &input);//输入选项
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
			SaveVocabulary(&voc);//退出时保存词汇表
			printf("退出\n");
			Sleep(1000);//睡眠一秒
			break;
		default:
			printf("选择错误,请重新输入\n");
		}
	} while (input);
}

int main()
{
	menu();//菜单
	test();
	return 0;
}


