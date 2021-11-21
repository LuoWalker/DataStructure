
//顺序表的实现 --- 动态分配

#include <stdio.h>
#include <stdlib.h>

#define InitSize 10

typedef struct
{
    int* data;
    int MaxSize; //总大小
    int Length; //当前长度
} SqList;

void InitList(SqList* L); //初始化
void AddSize(SqList* L, int len); //增加长度
int main()
{
    SqList L;
    InitList(&L);
    int i;
    for (i = 0; i < L.Length; i++) {
        printf("%d", L.data[i]);
    }
    printf("\n");
    AddSize(&L, 5);
    for (i = 0; i < L.Length; i++) {
        printf("%d", L.data[i]);
    }

    return 0;
}

void InitList(SqList* L)
{
    L->data = (int*)malloc(sizeof(int) * InitSize);
    L->Length = 0;
    L->MaxSize = InitSize;
}
void AddSize(SqList* L, int len)
{
    int i;
    int* p = L->data;
    L->data = (int*)malloc(sizeof(int) * (L->MaxSize + len));
    for (i = 0; i < L->MaxSize; i++) {
        L->data[i] = p[i];
    }
    L->MaxSize = L->MaxSize + len;
    free(p);
}