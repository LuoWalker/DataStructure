#include "LinkListHead.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/* 带头结点对每一个结点操作相同，L永远指向头结点 */
/* typedef struct LNode {
    int data; //数据域
    struct LNode* next; //指针域
} LNode;
 */

/* 初始化链表 */
bool InitList(LNode** L)
{
    *L = (LNode*)malloc(sizeof(LNode));
    if (L == NULL) {
        return false;
    }
    (*L)->data = 0;
    (*L)->next = NULL;
    return true;
}

/* 按位序查找 */
LNode* GetElem(LNode* L, int i)
{
    /* 找到第i个结点 */
    if (i < 0) {
        return NULL;
    }
    LNode* p;
    int j = 0; //表示遍历到第几个结点
    p = L; //新建一个结点，L属于0结点
    while (p != NULL && j < i) {
        p = p->next;
        j++;
    } //找到第i-1个结点
    return p;
}

/* 按数值查找 */
LNode* LocateElem(LNode* L, int e)
{
    LNode* p = L->next;
    while (p != NULL && p->data != e) {
        p = p->next;
    }
    return p;
}

/* 按位序插入 */
bool ListInsert(LNode* L, int i, int e)
{
    if (i < 1) {
        return false;
    }

    /* 找到第i-1个结点 */
    LNode* p;
    p = GetElem(L, i - 1);
    /* int j = 0; //表示遍历到第几个结点
    p = L; //新建一个结点，L属于0结点
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    } //找到第i-1个结点 */
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

/* 按位序删除 */
bool ListDelete(LNode* L, int i, int* e)
{
    if (i < 1) {
        return false;
    }
    LNode* p;
    p = GetElem(L, i - 1);
    /* int j = 0;
    p = L;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    } */
    if (p == NULL) {
        return false;
    }
    if (p->next == NULL) {
        return false;
    }
    LNode* q = p->next; //新建结点，储存第i个
    *e = q->data; //代回值
    p->next = q->next; //将p连接i的下一个
    free(q);
    return true;
}

/* 求表的长度 */
int Length(LNode* L)
{
    int len = 0;
    LNode* p = L;
    while (p->next != NULL) {
        p = p->next;
        len++;
    }
    return len;
}

/* 尾插法建表 */
LNode* List_TailInsert(LNode* L)
{
    int x; //data 数据
    L = (LNode*)malloc(sizeof(LNode));
    L->data = 0;
    LNode *s, *r = L; //*s -> 插入的结点， *r -> 尾结点
    scanf("%d", &x);
    while (x != 9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s; //s插到尾结点之后
        r = s; //r始终保持尾结点
        scanf("%d", &x);
    }
    r->next = NULL; //以防脏数据
    return L;
}

/* 头插法建表 */
LNode* List_HeadInsert(LNode* L)
{
    int x; //data 数据
    L = (LNode*)malloc(sizeof(LNode));
    L->data = 0;
    L->next = NULL;
    LNode* s = L; //*s -> 插入的结点， *r -> 尾结点
    scanf("%d", &x);
    while (x != 9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s; //s插到头结点之后
        scanf("%d", &x);
    }
    return L;
}