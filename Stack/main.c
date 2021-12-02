#include "Stack.h"
#include <stdio.h>

int main()
{
    int x;
    SqStack S;
    InitStack(&S);
    printf("%d\n", StackEmpty(S));
    scanf("%d", &x);
    Push(&S, x);
    printf("%d\n", StackEmpty(S));
    Pop(&S, &x);
    printf("%d\n", x);

    return 0;
}