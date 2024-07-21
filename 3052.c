#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[10];
    int temp[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        temp[i] = arr[i] % 42;
    }

    qsort(temp, 10, sizeof(int), compare);

    int count = 1;
    for (int i = 1; i < 10; i++) {
        if (temp[i] != temp[i - 1]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
