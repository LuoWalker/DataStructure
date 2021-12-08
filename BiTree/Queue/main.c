#include "LinkQueue.h"
#include "SqQueue.h"
#include <stdbool.h>
#include <stdio.h>

int main()
{
    int x;
    SqQueue Q;
    LinkQueue LQ;
    InitQueue(&Q);
    InitQueueL(&LQ);
    scanf("%d", &x);
    EnQueueL(&LQ, x);
    EnQueue(&Q, x);

    return 0;
}