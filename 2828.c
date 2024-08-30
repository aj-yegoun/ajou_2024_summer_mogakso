#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int j;
    scanf("%d", &j);

    int left = 1, right = m, result = 0;
    for (int i = 0; i < j; i++) {
        int apple;
        scanf("%d", &apple);

        if (apple < left) {
            result += (left - apple);
            left = apple;
            right = left + m - 1;
        }
        else if (apple > right) {
            result += (apple - right);
            right = apple;
            left = right - m + 1;
        }
    }

    printf("%d\n", result);

    return 0;
}
