#include <stdio.h>

void BinaryInsertSort(int* List, int n)
{
    int low, high, mid;
    int i, j;
    for (i = 2; i < n + 1; i++) {
        List[0] = List[i];
        low = 1;
        high = i - 1;

        while (low <= high) {
            mid = (low + high) / 2;
            if (List[mid] < List[0]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        for (j = i - 1; j >= low; j--) {
            List[j + 1] = List[j];
        }
        List[low] = List[0]; //最后的元素，应该插到high和low之间(此时high<low)，可以选择high后或者low前
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int A[n + 1];
    for (i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
    }
    BinaryInsertSort(A, n);
    for (i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}