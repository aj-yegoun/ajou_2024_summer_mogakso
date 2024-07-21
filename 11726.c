#include <stdio.h>

#define MOD 10007

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("1\n");
        return 0;
    }
    if (n == 2) {
        printf("2\n");
        return 0;
    }

    int arr[1001];

    arr[1] = 1;
    arr[2] = 2;

    for (int i = 3; i <= n; i++) {
        arr[i] = (arr[i - 1] + arr[i - 2]) % MOD;
    }

    printf("%d\n", arr[n]);

    return 0;
}
