#include "Biree_.h"
#include "SqQueue.h"
#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

void vivst(BiTree T)
{
    printf("%d", T->data);
}

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
        T = NULL;
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

/* void PreOrder2(BiTree T)
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
} */

void InOrder(BiTree T)
{
    while (T != NULL) {
        PreOrder(T->lchild);
        vivst(T);
        PreOrder(T->rchild);
    }
}

/* void InOrder2(BiTree T)
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
} */

void PostOrder(BiTree T)
{
    while (T != NULL) {
        PreOrder(T->lchild);
        PreOrder(T->rchild);
        vivst(T);
    }
}

/* void PostOrder2(BiTree T)
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
} */

/* void LevelOrder(BiTree T)
{
    SqQueue Q;
    InitQueue(&Q);
    BiTree p = T;
    EnQueue(&Q, T);
    while (p || !isEmpty(Q)) {
        DeQueue(&Q, &p);
        vivst(p);
        if (p->lchild != NULL) {
            DeQueue(p->lchild);
        }
        if (p->rchild != NULL) {
            DeQueue(&Q, p->rchild);
        }
    }
} */

int BtDepth(BiTree T)
{
    if (T == NULL) {
        return 0;
    }
    int front = 0, rear = 0;
    int last = 1, level = 0; // last 为每一层最后一个，初始只有一个根节点
    BiTree Q[MaxSize]; // 手动队列
    BiTree p = T;
    Q[rear++] = T; // 入队

    while (front < rear) { // 队列判空
        p = Q[front++]; // 出队

        if (p->lchild != NULL) {
            Q[rear++] = p->lchild;
        }
        if (p->rchild != NULL) {
            Q[rear++] = p->rchild;
        }

        if (front == last) { // 当某一层遍历完，当前队列里为该层的所有孩子节点，即 last=rear
            level++;
            last = rear;
        }
    }

    return level;
}

int BtDepth2(BiTree T)
{
    int l, r;

    if (T == NULL) {
        return 0;
    }
    l = BtDepth2(T->lchild);
    r = BtDepth2(T->rchild);

    if (l > r) {
        return l + 1;
    } else {
        return r + 1;
    }
}