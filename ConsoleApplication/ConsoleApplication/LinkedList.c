#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct {
	ElemType data;
	struct Node *next;
}Node, *LinkList;

//���
//plΪͷָ�� �����Ҷ�
int LinkListLength(LinkList pl) {
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
LinkList insertLinkList(LinkList pl, ElemType x, int n) {
	LinkList p = pl;
	LinkList q;//ָ�����ڵ�
	if (n == 1) {  //�Բ��뵽��һ�����⴦��
		q = (LinkList)malloc(sizeof(Node));
		q->data = x;
		q->next = pl;
		return q;
	}
	int i = 1;
	while (p != NULL && i < n - 1){
		p = p->next;
		i++;
	}
	if (i == n) {
		q = (LinkList)malloc(sizeof(Node));
		q->data = x;
		q->next = p->next;
		p->next = q;
		return pl;
	}
	else {
		return NULL;
	}
}

LinkList deleteLinkList(LinkList pl, int n) {
	LinkList p, q;
	p = getElemByPosition2(pl, n-1);
	if (p->next != NULL){
		q = p->next;
		p->next = q->next;
		free(q);
	}
}

LinkList createLinkList(int n) {
	LinkList q,s;
	LinkList pl = (LinkList)malloc(sizeof(Node));
	s = pl; //sָ��β��
	srand(time(0));
	for (int i = 0; i < n; i++){
		q = (LinkList)malloc(sizeof(Node));
		q->data = rand() % 100 + 1;
		s->next = q;
		s = q;
	}
	s->next = NULL;
	return pl;
}

int main() {
	/*LinkList pl = (LinkList)malloc(sizeof(Node));
	LinkList insertLinkList(LinkList pl, ElemType x, int n);
	for (int i = 0; i < 5; i++){
		int a;
		scanf("%d", &a);
		insertLinkList(pl, a, i + 1);
	}*/
	LinkList createLinkList(int n);
	LinkList L = createLinkList(3);
	while (L->next != NULL)
	{
		printf("%d\n",L->data);
	}
}