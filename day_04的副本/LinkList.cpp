#include <iostream>
#define ElemType int
typedef struct LNode{   //定义单链表结构类型
    ElemType data;      //数据域
    struct LNode* next; //指针域
}LNode,*LinkList;

//不带头节点的单链表初始化
bool Init_No_Head_List(LinkList &L){
    L=NULL;      //空表，暂时无节点  ，防止脏数据
    return true;
}
//判断不带头节点单链表是否为空
bool No_Head_Empty(LinkList L){
    return (L==NULL);
}

//带头节点的单链表初始化
bool Init_With_Head_List(LinkList &L){
    L=(LNode*) malloc(sizeof (LNode));      //分配一个头节点
    if(L==NULL)
        return false;               //内存不走，分配失败
    L->next=NULL;    //头节点之后暂时没有结点 next 指针域为空
    return true;
}
//判断带头节点单链表是否为空
bool With_Head_Empty(LinkList L){
    return (L->next==NULL);
}
//头插法建立单链表

int main() {
    LinkList L;    //声明一个指向单链表的指针
    Init_With_Head_List(L);   //初始化带头节点的空表
    bool b=With_Head_Empty(L);
    if(b)
        printf("带头节点的单链表为空");
    return 0;
}