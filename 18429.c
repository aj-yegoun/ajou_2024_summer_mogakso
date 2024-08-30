#include <stdio.h>

int n, k;
int count = 0;
int a[50], b[50];

void check(int day, int weight) {
    if (weight < 500) {
        return;
    }
    if (day == n) {
        count++;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!b[i]) {
            b[i] = 1;
            check(day + 1, weight + a[i] - k);
            b[i] = 0;
        }
    }
}

int main() {
    
    scanf("%d %d", &n, &k);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    check(0, 500);

    printf("%d\n", count);

    return 0;
}
