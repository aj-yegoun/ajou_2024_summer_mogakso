#include <stdio.h>

long long Gaussian(int n, int m) {
    long long sum = (long long)(m - n + 1) * (n + m) / 2;
    return sum;
}

int main() {
    int n, m, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);
        long long result = Gaussian(n, m);
        printf("Scenario #%d:\n%lld\n\n", i + 1, result);
    }

    return 0;
}
