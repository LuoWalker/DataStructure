#ifndef _BiTree__H_
#define _BiTree__H_

typedef struct BiNode {
    int data;
    struct BiNode *lchild, *rchild;
} BiNode, *BiTree;

void InitiaBiTree(BiTree* T);
void PreCreateBiTree(BiTree* T);

#endif