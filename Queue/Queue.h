#ifndef _Queue_H_
#define _Queue_H_
#define MaxSize 10
#include <stdbool.h>

typedef struct Queue {
    int data[MaxSize];
    int front, rear;
} SqQueue;

void InitQueue(SqQueue* Q);
bool isEmpty(SqQueue Q);
bool EnQueue(SqQueue* Q, int x);
bool DeQueue(SqQueue* Q, int* x);

#endif