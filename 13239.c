#include <stdio.h>
#define MOD 1000000007

long long comb[1001][1001];

void combination(int n, int k) { 
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                comb[i][j] = 1;
            }
            else {
                comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % MOD;
            }
        }
    }

    printf("%lld\n", comb[n][k]);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        combination(n, k);
    }
    return 0;
}
