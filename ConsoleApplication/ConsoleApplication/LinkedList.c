#include <stdio.h>

typedef int ElemType;
typedef struct {
	ElemType data;
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

//按序号查找
LinkList getElemByPosition(LinkList pl, int n) {
	LinkList p = pl;
	for (int i = 0; i < n; i++){
		if (p->next) {
			p = p->next;
		} else {
			printf("ERROR");
			return NULL;
		}
	}
	return p;
}

LinkList getElemByPosition2(LinkList pl, int n) {
	LinkList p = pl;
	int i = 1;
	while (p != NULL && i < n){
		p = p->next;
		i++;
	}
	if (i == n)
		return p;
	else
		return NULL;
}

//按值查找
LinkList getElemByValue(LinkList pl, ElemType value) {
	LinkList p = pl;
	while (p != NULL && p->data != value){
		p = p->next;
	}
	return p;
}

//插入
int insert(LinkList pl, ElemType x, int n) {
	LinkList p = pl;
	LinkList q;//指向插入节点
	int i = 1;
	while (p != NULL && i < n ){
		p = p->next;
		i++;
	}
	if (i == n) {
		q = (LinkList)malloc(sizeof(Node));
		q->data = x;
		q->next = p->next;
		p->next = q;
	}
	else {
		return NULL;
	}
}