#include <stdio.h>

int Decomposition_Combination(int n) {
    for (int i = 1; i <= n; i++) {
        int sum = i;
        int num = i;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum == n) {
            return i;
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", Decomposition_Combination(n));

    return 0;
}
