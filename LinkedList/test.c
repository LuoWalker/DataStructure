#include <stdio.h>

void Add(int* P);
int main()
{
    int* p;
    Add(p);
    //printf("%d", a);

    return 0;
}

void Add(int* Pa)
{
    Pa = NULL;
}