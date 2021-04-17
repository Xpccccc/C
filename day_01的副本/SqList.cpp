#include <iostream>
#define MaxSize 50      //定义线性表最大长度

typedef struct {
    int data[MaxSize];  //顺序表的元素
    int length;         //顺序表的当前长度
}SqList;                //顺序表的当前定义

//基本操作---初始化一个顺序表
void InitList(SqList &L){
    L.length=0;    //顺序表初始长度为0
}

//插入操作
bool ListInsert(SqList &L,int i,int e){
    if(i<1||i>L.length+1)  //判断i是否有效
        return false;
    if(L.length>=MaxSize)  //当前储存空间已满，不能插入
        return false;
    for(int j=L.length;j>=i;j--)  //将第i个元素及之后的元素后移
        L.data[j]=L.data[j-1];
    L.data[i-1]=e;  //在位置i插入e
    L.length++;     //线性表长加1
    return true;
}

//删除操作
bool ListDelete(SqList &L,int i,int &e){
    if(i<1||i>L.length+1)  //判断i是否有效
        return false;
    for(int j=i;j<L.length;j++)
        L.data[j-1]=L.data[j];
    L.length--;
    return true;
}
int main() {
    SqList L;
    InitList(L);//初始化一个顺序表
    ListInsert(L,1,3);
    ListInsert(L,2,5);
    ListInsert(L,3,6);
    ListInsert(L,4,8);
    printf("删除某个元素前的顺序表：");
    for(int i=0;i<L.length;i++){
        printf("%d ",L.data[i]); //输出线性表各元素
    }
    int e=0;    //把删除的元素带回来
    ListDelete(L,3,e);
    printf("删除的是%d\n",e);
    printf("删除某个元素后的顺序表：");
    for(int i=0;i<L.length;i++){
        printf("%d ",L.data[i]); //输出线性表各元素
    }
    return 0;
}
