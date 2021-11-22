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
    scanf("%d", &n);
    InitList(&A);
    CreateList(&A, n);

    int i, j;
    for (i = 0, j = 1; j < A.Length; j++) {
        if (A.data[i] != A.data[j]) {
            A.data[++i] = A.data[j];
        }
    }

    return 0;
}