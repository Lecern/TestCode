#include <stdio.h>
#define ElemType int;
typedef struct Node{
	int data;
	struct Node *next;
}Node, *LinkList;

//���
//plΪͷָ�� �����Ҷ�
int Length(LinkList pl) {
	LinkList p = pl;
	if (!p || !p->next){
		printf("��");
		return 0;
	}
	int length = 0;
	while (p->next){
		length++;
		p = p->next;
	}
	return length;
}