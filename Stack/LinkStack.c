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

//初始化链栈
LinkStack CreateLinkStack() {
    LinkStack s = (LinkStack)malloc(sizeof(Node));
    s->next = NULL;
    return s;
}

//入栈
int PushLinkStack(LinkStack q, ElemType x) {
    LinkStack node = (LinkStack)malloc(sizeof(Node));
    node->data = x;
    node->next = q->next;
    q->next = node;
    return 1;
}

//出栈
//类同于链表中删除节点操作
ElemType PopLinkStack(LinkStack q) {
    if (q->next == NULL) {
        printf("栈空");
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
//        p = p->next; //先后移一位 再输出!!!!!!!
//        printf("%d,", p->data);
//    }
    ElemType result = PopLinkStack(s);
    printf("\n出栈元素:%d\n", result);
    while (p->next) {
        p = p->next; //先后移一位 再输出!!!!!!!
        ElemType result = PopLinkStack(s);
        printf("出栈元素:%d\n", result);
        //printf("%d,", p->data);
    }
    return 1;
}