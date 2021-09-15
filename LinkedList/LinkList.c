#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/* 没有头结点时，对第一个结点操作时要改变L，所以要单独处理 */
typedef struct LNode {
    int data; //数据域
    struct LNode* next; //指针域
} LNode;

bool InitList(LNode** L);
bool ListInsert(LNode* L, int i, int e);
int main()
{
    LNode* L;
    InitList(&L);
    if (L == NULL) {
        printf("空");
    }
    return 0;
}

bool InitList(LNode** L)
{
    *L = NULL;
    return true;
}
bool ListInsert(LNode* L, int i, int e)
{
    if (i < 1) {
        return false;
    }
    if (i == 1) {
        LNode* s = (LNode*)malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;
        return true;
    }

    LNode* p; //储存当前遍历的结点
    int j = 1; //当前遍历到第j个结点
    p = L;
    if (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL) {
        return false;
    }
    LNode* s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}