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

//��ջ
int PushStack(Stack sq, ElemType x) {
    if (sq->top >= MaxSize - 1) {
        printf("��ջ��");
        return 0;
    }
    sq->data[++(sq->top)] = x;
    return 1;
}

//��ջ
ElemType PopStack(Stack sq) {
    if (sq->top < 0) {
        printf("ջΪ��");
        return 0;
    }
    return sq->data[(sq->top)--];
}

int main() {
    int a[5] = {1,2,3,4,5};
    int *q = a;
    printf("%d",q[1]);
    return 0;
}