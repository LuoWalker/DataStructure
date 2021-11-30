#include "LinkListHead.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

LNode* sort(LNode* L)
{
    LNode *p, *pre, *r;
    p = L->next;
    r = p->next;
    p->next = NULL;
    p = r;
    while (p != NULL) {
        r = p->next;
        pre = L;
        while (pre->next != NULL && pre->next->data < p->data) {
            pre = pre->next;
        }
        p->next = pre->next;
        pre->next = p;
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