#include "LinkListHead.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    LNode* L;
    int e;
    int len;
    InitList(&L); //如果直接传L的话，是一个野指针，不可以
    if (L == NULL) {
        printf("空");
    }
    L = List_TailInsert(L);
    ListInsert(L, 1, 1);
    ListInsert(L, 2, 2);
    ListDelete(L, 1, &e);
    len = Length(L);
    printf("%d %d", e, len);
    return 0;
}