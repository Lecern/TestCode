//
// Created by Jerry on 2017/6/21 0021.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int ElemType;

typedef struct {
    ElemType data;
    struct Node *next;
}Node, *LinkStack;

//��ʼ����ջ
LinkStack CreateLinkStack() {
    LinkStack s = (LinkStack)malloc(sizeof(Node));
    s->next = NULL;
    return s;
}

//��ջ
int PushLinkStack(LinkStack q, ElemType x) {
    LinkStack node = (LinkStack)malloc(sizeof(Node));
    node->data = x;
    node->next = q->next;
    q->next = node;
    return 1;
}

//��ջ
//��ͬ��������ɾ���ڵ����
ElemType PopLinkStack(LinkStack q) {
    if (q->next == NULL) {
        printf("ջ��");
        return 0;
    }
    LinkStack top = q->next;
    ElemType result = top->data;
    q->next = top->next;
    free(top);
    return result;
}
LinkStack CreateLinkStack();
int PushLinkStack(LinkStack q, ElemType x);
ElemType PopLinkStack(LinkStack q);

int main() {
    LinkStack s = CreateLinkStack();
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        int random = rand() % 100 + 1;
        PushLinkStack(s, i+1);
    }
    LinkStack p = s;
//    while (p->next) {
//        p = p->next; //�Ⱥ���һλ �����!!!!!!!
//        printf("%d,", p->data);
//    }
    ElemType result = PopLinkStack(s);
    printf("\n��ջԪ��:%d\n", result);
    while (p->next) {
        p = p->next; //�Ⱥ���һλ �����!!!!!!!
        ElemType result = PopLinkStack(s);
        printf("��ջԪ��:%d\n", result);
        //printf("%d,", p->data);
    }
    return 1;
}