#include <stdio.h>

int main() {
    int n;
    int arr[25];
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("%d", arr[0]);

        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                printf(" %d", arr[i]);
            }
        }
        printf(" $");
        printf("\n");
    }
    return 0;
}
