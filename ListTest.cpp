#include "list.h"

int main()
{
	//����һ������
	int arr[] = {12,165,54,0,54,5,54,15};

	//���Ա�
	SqList list;

	//��������������Ա���
	createList(list,arr,sizeof(arr)/sizeof(arr[0]));

	//���Ա��Ƿ�Ϊ��
	cout<<isEmpty(list)<<endl;

	//������Ա���
	cout<<listLength(list);
	printf("\n");

	//��ӡ���Ա�
	printList(list);

	//��ӡ������Ԫ��
	cout<<getElem(list,3);
}

