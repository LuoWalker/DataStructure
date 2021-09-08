
//顺序表的实现 --- 静态分配(数组)

#include <stdbool.h>
#include <stdio.h>

#define MaxSize 10
typedef struct
{
    int data[MaxSize];
    int Length; //当前表的长度
} SqList;

void InitList(SqList* L); // 初始化顺序表
bool ListInsert(SqList* L, int i, int e); //在表L的第i处插入e
bool ListDelete(SqList* L, int i, int* e); //在表L中删去第i个，并赋给e
int main()
{
    int i;
    int e;
    SqList L;
    InitList(&L); //初始化
    L.Length = 5;
    ListInsert(&L, 2, 2);
    ListDelete(&L, 7, &e);
    for (i = 0; i < L.Length; i++) {
        printf("%d ", L.data[i]);
    }
    if (ListDelete(&L, 7, &e)) {
        printf("\n%d", e);
    } else {
        printf("\n失败");
    }

    return 0;
}

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