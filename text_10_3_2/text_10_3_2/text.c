#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//#include <string.h>
//�۰�����㷨
//�������в���һ����

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0])-1;//����Ԫ�ظ���
	int left = 0;    //���±�
	int right = sz;  //���±�

	while (left <= right)  //���±�������±�����whileѭ��
	{
		int mid =(left+right)/2;
		if(arr[mid] > k)
		{
			right = mid-1;
		}
		else if(arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ%d\n",mid);
			break;
		}
	}
	if(left > right)
	{
		printf("�Ҳ���\n");
	}

	return 0;
}
