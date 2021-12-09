#include "Biree_.h"
#include <stdio.h>

int main()
{
    BiTree T;
    int Depth;
    InitiaBiTree(&T);
    CreateBiTree(&T);
    Depth = BtDepth(T);
    printf("depth = %d\n", Depth);

    Depth = BtDepth2(T);
    printf("depth = %d\n", Depth);

    return 0;
}