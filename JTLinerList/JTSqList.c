#include "JTSqlist.h"
#include <stdbool.h>
#include <stdio.h>
//顺序表的实现 --- 静态分配(数组)

void InitList(SqList* L)
{
    int i;
    for (i = 0; i < MaxSize; i++) {
        L->data[i] = 0;
    }
    L->Length = 0;
}

bool ListInsert(SqList* L, int i, int e)
{
    if (i < 1 || i > L->Length + 1) {
        return false;
    } else if (L->Length >= MaxSize) {
        return false;
    }
    int j;
    for (j = L->Length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }
    L->data[i - 1] = e;
    L->Length += 1;
    return true;
}

void CreateList(SqList* L, int n)
{
    int i, data;
    for (i = 1; i <= n; i++) {
        scanf("%d", &data);
        ListInsert(L, i, data);
    }
}

bool ListDelete(SqList* L, int i, int* e)
{
    if (i < 1 || i > L->Length) {
        return false;
    }
    int j;
    *e = L->data[i - 1];
    for (j = i; j < L->Length; j++) {
        L->data[j - 1] = L->data[j];
    }
    L->Length -= 1;
    return true;
}

void OutPutsList(SqList* L)
{
    int i;
    for (i = 0; i < L->Length; i++) {
        printf("%d ", L->data[i]);
    }
    printf("\n");
}