#ifndef _Stack_H_
#define _Stack_H_
#define MaxSize 10
#include <stdbool.h>

typedef struct Stack {
    int data[MaxSize];
    int top;
} SqStack;

void InitStack(SqStack* S);
bool StackEmpty(SqStack S);
bool Push(SqStack* S, int x);
bool Pop(SqStack* S, int* x);
bool GetTop(SqStack S, int* x);
bool DestroyStack(SqStack* S);

#endif