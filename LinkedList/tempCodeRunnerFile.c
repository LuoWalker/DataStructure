LNode* List_TailInsert(LNode* L)
{
    int x; //data 数据
    L = (LNode*)malloc(sizeof(LNode));
    LNode *s, *r = L; //*s -> 插入的结点， *r -> 尾结点
    scanf("%d", &x);
    while (x != 9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s; //s插到尾结点之后
        r = s; //r始终保持尾结点
        scanf("%d", &x);
    }
    r->next = NULL; //以防脏数据
    return L;
}