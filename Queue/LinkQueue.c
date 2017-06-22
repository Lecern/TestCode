#include <malloc.h>
#include <stdio.h>

//
// Created by Jerry on 2017/6/22 0022.
//
typedef int ElemType;
typedef struct {
    ElemType data;
    struct LinkNode *next;
}LinkNode,*Node;
typedef struct {
    LinkNode *front,*rear;
}*LinkQueue;

//进队
int EnLinkQueue(LinkQueue q, ElemType e) {
    Node node = (Node)malloc(sizeof(LinkNode));
    node->data = e;
    node->next = q->rear->next;
    q->rear->next = node;
    q->rear = node;
    return 1;
}

//出队列
ElemType DeLinkQueue(LinkQueue q) {
    if (q->rear == q->front) {
        printf("栈空");
        return 0;
    }
    Node firstNode = q->front->next;
    q->front->next = firstNode->next;
    free(firstNode);
    return 1;
}
