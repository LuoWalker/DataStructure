#ifndef _BiTree__H_
#define _BiTree__H_

typedef struct BiNode {
    int data;
    struct BiNode *lchild, *rchild;
} BiNode, *BiTree;

void vivst(BiTree T);
void InitiaBiTree(BiTree* T);
void CreateBiTree(BiTree* T);
void PreOrder(BiTree T);
void InOrder(BiTree T);
void PostOrder(BiTree T);
void PreOrder2(BiTree T);
void InOrder2(BiTree T);
void PostOrder2(BiTree T);

#endif