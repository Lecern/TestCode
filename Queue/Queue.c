//
// Created by Jerry on 2017/6/22 0022.
//

#include <stdio.h>
#define MaxSize 50

typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int front;
    int rear;
}*Queue;

//进队
int EnQueue(Queue q, ElemType x) {
    if (q->rear >= MaxSize - 1) {
        printf("队列满");
        return 0;
    }
    q->data[++(q->rear)] = x;
    return 1;
}

//出队列
int DeQueue(Queue q) {
    if (q->rear == q->front) {
        printf("队列空");
        return 0;
    }
    for (int i = 0; i < q->rear; ++i) {
        q->data[i] = q->data[i + 1];
    }
    q->rear--;
    return 1;
}

int main() {
    printf("Hello Queue");
    return 1;
}