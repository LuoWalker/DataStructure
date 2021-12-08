#ifndef _LinkQueue_H_
#define _LinkQueue_H_
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} LNode;

typedef struct QueueL {
    LNode *front, *rear;
} LinkQueue;

void InitQueueL(LinkQueue* Q);
bool isEmptyL(LinkQueue Q);
void EnQueueL(LinkQueue* Q, int x);
bool DeQueueL(LinkQueue* Q, int* x);

#endif