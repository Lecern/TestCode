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
}*CycleQueue;

int EnCycleQueue(CycleQueue q, ElemType e) {
    if ((q->rear + 1) % MaxSize == q->front) {
        printf("队列满");
        return 0;
    }
    q->rear = (q->rear + 1) % MaxSize;
    q->data[q->rear] = e;
    return 1;
}

ElemType DeCycleQueue(CycleQueue q) {
    if (q->rear == q->front) {
        printf("队列空");
        return 0;
    }
    q->front = (q->front + 1) % MaxSize;
    return q->data[q->front];
}