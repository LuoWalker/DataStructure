#include <stdio.h>

void fun(int *b)
{
    b[0] = 2;
    b[1] = 3;
}
int main()
{
    int a[2] = { 1, 2 };
    fun(a);
    printf("%d %d", a[0], a[1]);
    return 0;
}