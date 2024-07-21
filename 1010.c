#include <stdio.h>

long long combination(int n, int m) {
    if (n > m - n)
        n = m - n;

    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= (m - i); // m * (m-1) * ... * (m-n+1)
        result /= (i + 1); // n!
    }
    return result;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int n, m;
        scanf("%d %d", &n, &m);
        long long comb = combination(n, m);
        printf("%lld\n", comb);
    }

    return 0;
}
