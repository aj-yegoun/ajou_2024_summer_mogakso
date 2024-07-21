#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    if (k > n - k) {
        k = n - k;
    }

    long long result = 1;
    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }

    printf("%lld\n", result);
    return 0;
}
