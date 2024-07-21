#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n, m;
        scanf("%d %d", &n, &m);
        if (n < 12 || m < 4) {
            printf("-1\n");
        }
        else {
            int L4 = 11 * m + 4;
            printf("%d\n", L4);
        }
    }
    return 0;
}
