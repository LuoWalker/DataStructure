#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
    int data; //数据域
    struct LNode* next; //指针域
} LNode;

bool ListInsert(LNode* L, int i, int e);
bool InitList(LNode** L);
int main()
{
    LNode* L;
    InitList(&L); //如果直接传L的话，是一个野指针，不可以
    if (L == NULL) {
        printf("空");
    }
    return 0;
}

bool InitList(LNode** L)
{
    *L = (LNode*)malloc(sizeof(LNode));
    if (L == NULL) {
        return false;
    }
    (*L)->next = NULL;
    return true;
}
bool ListInsert(LNode* L, int i, int e)
{
    if (i < 1) {
        return false;
    }
    LNode* p;
    int j = 0;
    p = L; //新建一个节点，储存当前遍历的第j个节点，从L开始
}