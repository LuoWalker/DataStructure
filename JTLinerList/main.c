#include "JTSqList.h"
#include <stdbool.h>
#include <stdio.h>

/* typedef struct
{
    int data[MaxSize]; 
    int Length; //当前表的长度
} SqList; */

void Reverse(SqList* L, int low, int high)
{
    int i, temp;
    for (i = 0; i < (high - low) / 2 + 1; i++) {
        temp = L->data[low + i];
        L->data[low + i] = L->data[high - i];
        L->data[high - i] = temp;
    }
}

int main()
{
    SqList A;
    int n;
    scanf("%d", &n);
    InitList(&A);
    CreateList(&A, n);

    int p;
    scanf("%d", &p);

    Reverse(&A, 0, A.Length - 1);
    OutPutsList(&A);

    Reverse(&A, 0, p - 1);
    OutPutsList(&A);

    Reverse(&A, p, A.Length - 1);
    OutPutsList(&A);

    return 0;
}