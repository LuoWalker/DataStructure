#ifndef _LinkList_H_
#define _LinkList_H_
#include <stdbool.h>

typedef struct LNode {
    int data; //数据域
    struct LNode* next; //指针域
} LNode;

bool InitList(LNode** L);
bool ListInsert(LNode** L, int i, int e);
bool ListDelete(LNode* L, int i, int* e);

#endif