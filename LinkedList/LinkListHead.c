#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/* 带头结点对每一个结点操作相同，L永远指向头结点 */
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

/* 初始化链表 */
bool InitList(LNode** L)
{
    *L = (LNode*)malloc(sizeof(LNode));
    if (L == NULL) {
        return false;
    }
    (*L)->next = NULL;
    return true;
}

/* 按位序插入 */
bool ListInsert(LNode* L, int i, int e)
{
    if (i < 1) {
        return false;
    }

    /* 找到第i-1个结点 */
    LNode* p;
    int j = 0; //表示遍历到第几个结点
    p = L; //新建一个结点，L属于0结点
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    } //找到第i-1个结点
    if (p == NULL) {
        return false;
    }

    /* 将新结点连到i-1后面 */
    LNode* s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    //此时，*P指向头结点，P->next为第二个点
    //此语句将新结点连接第二个点
    p->next = s;
    //此语句将头结点与s相连

    return true;
}