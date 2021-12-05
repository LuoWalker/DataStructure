#include "Biree_.h"
#include "SqQueue.h"
#include <stdio.h>
#include <stdlib.h>

void InitiaBiTree(BiTree* T)
{
    *T = (BiTree)malloc(sizeof(BiNode));
    (*T)->data = 1;
    (*T)->lchild = NULL;
    (*T)->rchild = NULL;
}

void CreateBiTree(BiTree* T)
{
    int x;
    BiTree p;
    scanf("%d", &x);
    p = (BiTree)malloc(sizeof(BiNode));
    p->data = x;
    if (x == 0) {
        return;
    }
    p->rchild = NULL;
    p->lchild = NULL;
    (*T) = p;
    CreateBiTree(&((*T)->lchild));
    CreateBiTree(&((*T)->rchild));
}