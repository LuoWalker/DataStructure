#include "JTSqList.h"
#include <stdbool.h>
#include <stdio.h>

/* typedef struct
{
    int data[MaxSize];
    int Length; //当前表的长度
} SqList; */

int main()
{
    SqList A;
    int n;
    int i, temp;
    scanf("%d", &n);
    InitList(&A);
    CreateList(&A, n);

    for (i = 0; i < n / 2; i++) {
        temp = A.data[i];
        A.data[i] = A.data[A.Length - 1 - i];
        A.data[A.Length - 1 - i] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d", A.data[i]);
    }

    return 0;
}