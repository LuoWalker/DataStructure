#include <stdio.h>
#include <stdlib.h>

typedef struct SSTable {
    int* elem;
    int TableLen;
} Seqlist;

void CreateSSTable(Seqlist* ST, int n)
{
    ST->TableLen = n;
    ST->elem = (int*)malloc((n + 1) * sizeof(int));
    while (n > 0) {
        scanf("%d", &ST->elem[ST->TableLen - n + 1]);
        n--;
    }
}

int Binary_Search(Seqlist L, int key)
{
    int low = 1, high = L.TableLen, mid;
    while (low < high) {
        mid = (low + high) / 2;
        if (L.elem[mid] == key) {
            return mid;
        } else if (L.elem[mid] > key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    Seqlist L;
    int n;
    scanf("%d", &n);
    CreateSSTable(&L, n);
    printf("%d", Binary_Search(L, 3));
    return 0;
}