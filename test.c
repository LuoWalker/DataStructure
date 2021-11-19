#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a;
    a = (int*)malloc(3 * sizeof(int));
    a[0] = 2;
    a[1] = 0;
    a[2] = 1;

    return 0;
}