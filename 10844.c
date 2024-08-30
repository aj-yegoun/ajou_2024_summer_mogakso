#include <stdio.h>

#define MAX(a,b) (a > b ? a : b)

int main() {
    int n;
    scanf("%d", &n);
    int stair[301];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &stair[i]);
    }

    int dp[301];
    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];

    for (int i = 3; i <= n; i++) {
        dp[i] = stair[i] + MAX(stair[i - 1] + dp[i - 3], dp[i - 2]);
    }
    printf("%d\n", dp[n]);

    return 0;
}
