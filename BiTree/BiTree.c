#include "BiTree_.h"
#include <stdio.h>
#include <stdlib.h>

void InitiaBiTree(BiTree* T)
{
    *T = (BiTree)malloc(sizeof(BiNode));
    (*T)->lchild = NULL;
    (*T)->rchild = NULL;
}

void PreCreateBiTree(BiTree* T)
{
    int x;
    scanf("%d", &x);
    if (x == 999) {
        (*T) = NULL;
    } else {
        (*T)->data = x;
        PreCreateBiTree(&((*T)->lchild));
        PreCreateBiTree(&((*T)->lchild));
    }
}