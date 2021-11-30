#include "LinkListHead.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

LNode* sort(LNode* L)
{
    LNode *maxP, *p, *q, *r;
    int temp;
    int flag = 0;
    p = L->next;
    maxP = p;

    while (p != NULL) {
        r = p->next;
        for (q = p; q != NULL; q = q->next) {
            if (q->data > maxP->data) {
                maxP = q;
                flag = 1;
            }
        }
        if (flag == 1) {
            temp = p->data;
            p->data = maxP->data;
            maxP->data = temp;
        }
        p = r;
    }

    return L;
}
int main()
{
    LNode *L, *p;

    InitList(&L); //如果直接传L的话，是一个野指针，不可以
    if (L == NULL) {
        printf("空");
    }
    L = List_TailInsert(L);
    L = sort(L);
    for (p = L->next; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    return 0;
}