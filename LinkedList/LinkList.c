#include <stdbool.h>
#include <stdio.h>

typedef struct LNode {
    int data; //数据域
    struct LNode* next; //指针域
} LNode;

bool InitList(LNode** L);
int main()
{
    LNode* L;
    InitList(&L);
    if (L == NULL) {
        printf("空");
    }
    return 0;
}

bool InitList(LNode** L)
{
    *L = NULL;
    return true;
}