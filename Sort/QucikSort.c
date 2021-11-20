#include <stdio.h>

int Partition(int* List, int low, int high)
{
    int x;
    x = List[low];
    while (low < high) {
        while (low < high && List[high] >= x) {
            high--;
        }
        List[low] = List[high];
        while (low < high && List[low] <= x) {
            low++;
        }
        List[high] = List[low];
    }
    List[high] = x;
    return high;
}

void QuickSort(int* List, int low, int high)
{
    if (low < high) {
        int pivot = Partition(List, low, high);
        QuickSort(List, low, pivot - 1);
        QuickSort(List, pivot + 1, high);
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
    QuickSort(List, 0, n - 1);
    for (i = 0; i < n; i++) {
        printf("%d ", List[i]);
    }
    return 0;
}