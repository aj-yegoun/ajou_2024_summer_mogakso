#include <stdio.h>

int main() {
    int n, k;
    while (scanf("%d %d", &n, &k) != EOF) {
        int chicken_count = n;
        int coupons = n;

        while (coupons >= k) {
            int additional_chickens = coupons / k;
            chicken_count += additional_chickens;
            coupons = additional_chickens + (coupons % k);
        }

        printf("%d\n", chicken_count);
    }

    return 0;
}
