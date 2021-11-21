#ifndef _JTSqList_H_
#define _JTSqList_H_

#include <stdbool.h>

#define MaxSize 10
typedef struct
{
    int data[MaxSize];
    int Length; //当前表的长度
} SqList;

void InitList(SqList* L); // 初始化顺序表
bool ListInsert(SqList* L, int i, int e); //在表L的第i处插入e
void CreateList(SqList* L, int n); //建表
bool ListDelete(SqList* L, int i, int* e); //在表L中删去第i个，并赋给e

#endif