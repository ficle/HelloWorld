#include "list.h"

int main()
{
	//定义一个数组
	int arr[] = {12,165,54,0,54,5,54,15};

	//线性表
	SqList list;

	//把数组添加入线性表中
	createList(list,arr,sizeof(arr)/sizeof(arr[0]));

	//线性表是否为空
	cout<<isEmpty(list)<<endl;

	//输出线性表长度
	cout<<listLength(list);
	printf("\n");

	//打印线性表
	printList(list);

	//打印第三个元素
	cout<<getElem(list,3);
}

