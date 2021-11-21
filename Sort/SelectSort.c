#include <stdio.h>

void SelectSort(int* List, int n)
{
    int i, j;
    int temp;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (List[j] < List[i]) {
                temp = List[i];
                List[i] = List[j];
                List[j] = temp;
            }
        }
    }
}
int main()
{
    int i, n;
    scanf("%d", &n);
    int List[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &List[i]);
    }
    SelectSort(List, n);
    for (i = 0; i < n; i++) {
        printf("%d ", List[i]);
    }
    return 0;
}