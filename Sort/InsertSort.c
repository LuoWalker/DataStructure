#include <stdio.h>

void InsertSort(int List[], int n)
{
    int i, j;
    for (i = 2; i <= n; i++) {
        if (List[i] < List[i - 1]) {
            List[0] = List[i];
            for (j = i - 1; List[0] < List[j]; j--) {
                List[j + 1] = List[j];
            }
            List[j + 1] = List[0];
        }
    }
}
int main()
{
    int i, n;
    scanf("%d", &n);
    int List[n + 1];
    for (i = 1; i <= n; i++) {
        scanf("%d", &List[i]);
    }
    InsertSort(List, n);
    for (i = 1; i <= n; i++) {
        printf("%d ", List[i]);
    }
    return 0;
}