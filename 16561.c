#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 3; i <= n - 6; i += 3) {
        for (int j = 3; j <= n - i - 3; j += 3) {
            int c = n - i - j;
            if (c >= 3 && c % 3 == 0) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
