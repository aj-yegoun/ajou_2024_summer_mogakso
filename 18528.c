#include <stdio.h>

int main() {
    int x, y, a, b;
    scanf("%d %d %d %d", &x, &y, &a, &b);

    int xp = a, yp = b;

    while (1) {
        if (xp == yp) {
            printf("%d\n", xp);
            return 0;
        }
        if (xp > yp) {
            yp += y;
        }
        else {
            xp += x;
        }
        // 두 값이 매우 커질 경우 무한 루프 방지
        if (xp > 1000000 || yp > 1000000) {
            break;
        }
    }
    printf("-1\n");
    return 0;
}
