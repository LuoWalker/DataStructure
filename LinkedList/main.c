#include "LinkListHead.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

LNode* merge(LNode* A, LNode* B)
{
    LNode *pa, *pb;
    LNode* r;
    pa = A->next;
    A->next = NULL;
    pb = B->next;
    B->next = NULL;

    while (pa != NULL && pb != NULL) {
        if (pa->data < pb->data) {
            r = pa->next;
            pa->next = A->next;
            A->next = pa;
            pa = r;
        } else { 
            r = pb->next;
            pb->next = A->next;
            A->next = pb;
            pb = r;
        }
    }
    return A;
}

int main()
{
    LNode *L1, *L2;
    LNode *L, *p;

    InitList(&L1);
    InitList(&L2);
    InitList(&L); //如果直接传L的话，是一个野指针，不可以
    if (L == NULL) {
        printf("空");
    }
    L1 = List_TailInsert(L1);
    L2 = List_TailInsert(L2);
    L = merge(L1, L2);
    for (p = L->next; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    return 0;
}