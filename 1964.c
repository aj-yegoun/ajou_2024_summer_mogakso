#include <stdio.h>

long long dp[10000001];

int main() {
    int n;
    scanf("%d", &n);

    dp[1] = 5;
    dp[2] = 12;
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + 3 * i + 1) % 45678;
    }

    printf("%lld\n", dp[n]);

    return 0;
}
