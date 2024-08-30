#include <stdio.h>
#include <stdlib.h>

int compare_ascending(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int compare_descending(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[50], b[50];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    qsort(a, n, sizeof(int), compare_ascending);

    qsort(b, n, sizeof(int), compare_descending);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }

    printf("%d\n", sum);

    return 0;
}
