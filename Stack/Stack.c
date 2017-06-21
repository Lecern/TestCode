//
// Created by Jerry on 2017/6/21 0021.
//
#include <stdio.h>
#define MaxSize 50

typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int top;
}*Stack;

int PushStack(Stack sq, ElemType x) {
    if (sq->top >= MaxSize - 1) {
        printf("堆栈满");
        return 0;
    }
    sq->data[++(sq->top)] = x;
    return 1;
}
