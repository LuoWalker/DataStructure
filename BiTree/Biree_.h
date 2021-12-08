#ifndef _BiTree__H_
#define _BiTree__H_

typedef struct BiNode {
    int data;
    struct BiNode *lchild, *rchild;
} BiNode, *BiTree;

void InitiaBiTree(BiTree* T);
void CreateBiTree(BiTree* T);
void PreOrder(BiTree T);
void InOrder(BiTree T);
void PostOrder(BiTree T);

#endif