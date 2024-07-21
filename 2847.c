#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int levels[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &levels[i]);
    }

    int score = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (levels[i] >= levels[i + 1]) {
            score += (levels[i] - levels[i + 1] + 1);
            levels[i] = levels[i + 1] - 1;
        }
    }

    printf("%d\n", score);
    return 0;
}
