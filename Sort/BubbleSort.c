#include <stdio.h>

void BubblSort(int* List, int n)
{
    int i, j;
    int flag = 0;
    int temp;
    for (i = 0; i < n; i++) {
        for (j = i; j < n - 1; j++) {
            if (List[j] > List[j + 1]) {
                temp = List[j];
                List[j] = List[j + 1];
                List[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
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
    BubblSort(List, n);
    for (i = 0; i < n; i++) {
        printf("%d ", List[i]);
    }
    return 0;
}