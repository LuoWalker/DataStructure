#include "LinkQueue.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void InitQueueL(LinkQueue* Q)
{
    Q->front = Q->rear = (LNode*)malloc(sizeof(LNode));
    Q->front->next = NULL;
}
bool isEmptyL(LinkQueue Q)
{
    if (Q.front == Q.rear) {
        return true;
    } else {
        return false;
    }
}
void EnQueueL(LinkQueue* Q, int x)
{
    LNode* s;
    s = (LNode*)malloc(sizeof(LNode));
    s->data = x;
    s->next = NULL;
    Q->rear->next = s;
    Q->rear = s;
}
bool DeQueueL(LinkQueue* Q, int* x)
{
    if (Q->front == Q->rear) {
        return false;
    } else {
        LNode* p;
        p = Q->front->next;
        *x = p->data;
        Q->front->next = p->next;
        if (p == Q->rear) {
            Q->rear = Q->front;
        }
        free(p);
        return true;
    }
}