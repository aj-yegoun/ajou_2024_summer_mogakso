#include <stdio.h>
#include <stdlib.h>

int compare(const void* first, const void* second) {
    int* a = (int*)first;
    int* b = (int*)second;

    if (*a < *b)
        return -1;
    else if (*a > *b)
        return 1;
    return 0;
}

int search(int arr[], int n, int num) {
    int start, end, middle;
    start = 0;
    end = n - 1;
    while (start <= end) {
        middle = (start + end) / 2;

        if (arr[middle] == num) {
            return 1;
        }
        else if (arr[middle] < num) {
            start = middle + 1;
        }
        else {
            end = middle - 1;
        }
    }
    return 0;
}

int main() {
    int n, m;
    scanf("%d", &n);
    int* arr1 = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    qsort(arr1, n, sizeof(int), compare);

    int data;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &data);
        if (search(arr1, n, data) == 1) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }

    free(arr1);
    return 0;
}
