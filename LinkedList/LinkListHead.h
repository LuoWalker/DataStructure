#ifndef _LinkListHead_H_
#define _LinkListHead_H_
#include <stdbool.h>

typedef struct LNode {
    int data; //数据域
    struct LNode* next; //指针域
} LNode;

bool ListInsert(LNode* L, int i, int e);
bool InitList(LNode** L);
bool ListDelete(LNode* L, int i, int* e);
LNode* GetElem(LNode* L, int i);
LNode* LocateElem(LNode* L, int e);
int Length(LNode* L);
LNode* List_TailInsert(LNode* L);

#endif