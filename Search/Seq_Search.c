#include <stdio.h>
#include <stdlib.h>

typedef struct SSTable {
    int* elem;
    int TableLen;
} SSTable;

void CreateSSTable(SSTable* ST, int n)
{
    ST->TableLen = n;
    ST->elem = (int*)malloc((n + 1) * sizeof(int));
    while (n > 0) {
        scanf("%d", &ST->elem[ST->TableLen - n + 1]);
        n--;
    }
}

int Seq_Search(SSTable ST, int key)
{
    int i;
    ST.elem[0] = key;
    for (i = ST.TableLen; ST.elem[i] != key; i--) {
    }
    return i;
}

int main()
{
    SSTable ST;
    int n;
    scanf("%d", &n);
    CreateSSTable(&ST, n);
    printf("%d", Seq_Search(ST, 3));
    return 0;
}