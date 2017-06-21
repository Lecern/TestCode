//
// Created by Jerry on 2017/6/21 0021.
//
#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct {
    ElemType data;
    struct Node *next;
}Node, *LinkStack;

LinkStack CreateLinkStack() {
    LinkStack s = (LinkStack)malloc(sizeof(Node));
    s->next = NULL;
    return s;
}

int PushLinkStack(LinkStack q, ElemType x) {
    LinkStack node = (LinkStack)malloc(sizeof(Node));
    node->data = x;
    node->next = q->next;
    q->next = node;
}