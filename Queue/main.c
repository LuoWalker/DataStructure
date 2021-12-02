#include "Queue.h"
#include <stdbool.h>
#include <stdio.h>

int main()
{
    int x;
    SqQueue Q;
    InitQueue(&Q);
    printf("%d", isEmpty(Q));
    scanf("%d", &x);
    EnQueue(&Q, x);
    printf("%d", isEmpty(Q));

    return 0;
}