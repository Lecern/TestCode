#include <stdio.h>

typedef int ElemType;
typedef struct {
	ElemType data;
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

//����Ų���
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

//��ֵ����
LinkList getElemByValue(LinkList pl, ElemType value) {
	LinkList p = pl;
	while (p != NULL && p->data != value){
		p = p->next;
	}
	return p;
}

//����
int insert(LinkList pl, ElemType x, int n) {
	LinkList p = pl;
	LinkList q;//ָ�����ڵ�
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