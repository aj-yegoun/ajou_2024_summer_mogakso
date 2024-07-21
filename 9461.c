#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    long long dp[100] = { 1,1,1,2,2 };
    for (int i = 5; i < 100; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        printf("%lld\n", dp[num - 1]);
    }
    return 0;
}
