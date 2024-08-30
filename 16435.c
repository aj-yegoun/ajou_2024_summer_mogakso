#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, length;
    scanf("%d %d", &n, &length);
    int height[10001];
    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    qsort(height, n, sizeof(int), compare);

    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        if (height[i] <= length) {
            length++;
        }
        else break;
    }

    printf("%d\n", length);

    return 0;
}
