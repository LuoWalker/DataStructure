#include "Biree_.h"
#include "SqQueue.h"
#include "Stack.h"
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

void PreOrder(BiTree T)
{
    while (T != NULL) {
        vivst(T);
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

void PreOrder2(BiTree T)
{
    SqStack s;
    InitStack(&s);
    BiTree p = T;
    while (p || StackEmpty) {
        if (p) {
            vivst(p);
            Push(&s, p);
            p = p->lchild;
        } else {
            Pop(&s, &p);
            p = p->rchild
        }
    }
}

void InOrder(BiTree T)
{
    while (T != NULL) {
        PreOrder(T->lchild);
        vivst(T);
        PreOrder(T->rchild);
    }
}

void InOrder2(BiTree T)
{
    SqStack s;
    InitStack(&s);
    BiTree p;
    p = T;
    while (p || !StackEmpty(s)) {
        if (p != NULL) {
            Push(s, p);
            p = p->lchild
        } else {
            Pop(&s, &p);
            vivst(p);
            p = p->rchild
        }
    }
}

void PostOrder(BiTree T)
{
    while (T != NULL) {
        PreOrder(T->lchild);
        PreOrder(T->rchild);
        vivst(T);
    }
}

void PostOrder(BiTree T)
{
    SqStack s;
    InitStack(&s);
    BiTree p = T;
    BiTree r = NULL;
    while (p || StackEmpty(s)) {
        if (p) {
            Push(p);
            p->lchild;
        } else {
            GetTop(s, &p);
            if (p->rchild = NULL || p->rchild = r) {
                Pop(&s, &p);
                vivst(p);
                r = p;
                p = NULL;
            } else {
                p = p->rchild;
            }
        }
    }
}