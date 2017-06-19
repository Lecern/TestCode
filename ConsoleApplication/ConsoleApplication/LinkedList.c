#include <stdio.h>
#define ElemType int;
typedef struct Node{
	int data;
	struct Node *next;
}Node, *LinkList;

//求表长
//pl为头指针 不可乱动
int Length(LinkList pl) {
	LinkList p = pl;
	if (!p || !p->next){
		printf("空");
		return 0;
	}
	int length = 0;
	while (p->next){
		length++;
		p = p->next;
	}
	return length;
}