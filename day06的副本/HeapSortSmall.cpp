#include <iostream>
#define ElemType int

//声明HeadAdjust函数
void HeapAdjust(ElemType A[],int k,int len);
//声明Swap函数
void Swap(ElemType &a,ElemType &b);

//建立小根堆
void BuildSmallHeap(ElemType A[],int len){
    for(int i=len/2;i>0;i--){   //从i=[n/2]~1  反复调整堆
        HeapAdjust(A,i,len);
    }
}
void HeapAdjust(ElemType A[],int k,int len){
    //将元素k为根作为的子树进行调整
    A[0]=A[k];                          //A[0]暂存子树的根节点
    for(int i=2*k;i<=len;i*=2){         //沿key较小的值向下寻找
        if(i<len&&A[i]>A[i+1]){
            i++;                        //取key较小的结点的下标
        }
        if(A[0]<=A[i])
            break;                      //筛选结束
        else{
            A[k]=A[i];                  //将更小的key调整到双亲节点上
            k=i;                        //修改k值，以便继续往下筛选
        }
    }
    A[k]=A[0];                          //被筛选的值放到最终位置上
}
//堆排序算法
void HeapSort(ElemType A[],int len){
    BuildSmallHeap(A,len);              //初始建堆
    for(int i=len;i>1;i--){             //n-1趟的交换和建堆过程
        Swap(A[i],A[1]);                //输出堆顶元素(和堆底元素互换)
        HeapAdjust(A,1,i-1);    //调整，把剩余的i-1个元素调整成堆
    }
}
//交换两个元素
void Swap(ElemType &a,ElemType &b){
    ElemType temp=a;
    a=b;
    b=temp;
}
int main() {
    int A[11]={0,33,985,322,211,44,45,634,635,554,754};         //初始化数组
    HeapSort(A,10);                         //调用堆排序算法
    for(int i=0;i<11;i++){                      //输出确认排序是否正确
        printf("%d ",A[i]);
    }
    return 0;
}
