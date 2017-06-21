//
// Created by Jerry on 2017/6/21 0021.
//
#include <stdio.h>
#define MaxSize 50

typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int top1;
    int top2;
}*DoubleStack;

//入栈
int PushDoubleStack(DoubleStack q, ElemType x, int flag) {
    if (q->top1 + 1 == q->top2) {
        printf("栈已满");
        return 0;
    }
    switch (flag) {
        case 1:
            q->data[++(q->top1)] = x;
            break;
        case 2:
            q->data[--(q->top2)] = x;
            break;
        default:
            printf("非法数字");
            return 0;
    }
    return 1;
}

//出栈
ElemType PopDoubleStack(DoubleStack p, int flag) {
    if ((flag == 1 && p->top1 == -1) || (flag == 2 && p->top2 == MaxSize)) {
        printf("栈空");
        return 0;
    }
    switch (flag) {
        case 1:
            return p->data[(p->top1)--];
        case 2:
            return p->data[(p->top2)++];
        default:
            printf("非法数字");
            return 0;
    }
}