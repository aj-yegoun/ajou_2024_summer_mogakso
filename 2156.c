#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c) { // 3개의 항 중 최댓값 구하는 함수
    if (a > b) {
        return (a > c) ? a : c;
    }
    else {
        return (b > c) ? b : c;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int* wine = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 1; i <= n; i++) {
        scanf("%d", &wine[i]);
    }

    int* dp = (int*)malloc(sizeof(int) * (n + 1));

    if (n == 1) {
        printf("%d\n", wine[1]);
        return 0;
    }
    else if (n == 2) {
        printf("%d\n", wine[1] + wine[2]);
        return 0;
    }

    dp[0] = 0;
    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];
    dp[3] = max(dp[2], wine[1] + wine[3], wine[2] + wine[3]);
    for (int i = 4; i <= n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + wine[i], dp[i - 3] + wine[i - 1] + wine[i]);
    }

    printf("%d\n", dp[n]);

    free(wine);
    free(dp);

    return 0;
}

// 현재 잔을 마시지 않는 경 dp[i] = dp[i - 1]
// 현재 잔을 마시고, 바로 전 잔을 마시지 않는 경우: dp[i] = dp[i − 2] + wine[i]우:
// 현재 잔을 마시고, 바로 전 잔도 마시는 경우: dp[i] = dp[i − 3] + wine[i − 1] + wine[i]