#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, m;
    scanf("%d %d", &a, &b);
    scanf("%d", &m);

    int* digits = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &digits[i]);
    }

    int temp = 0;
    for (int i = 0; i < m; i++) {
        temp = temp * a + digits[i];
    }

    int result[32];
    int index = 0;
    do {
        result[index++] = temp % b;
        temp /= b;
    } while (temp > 0);

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", result[i]);
        if (i > 0) {
            printf(" ");
        }
    }

    free(digits);
    return 0;
}
