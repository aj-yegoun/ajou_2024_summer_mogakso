#include <stdio.h>

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a + b >= 2 * c) {
        printf("%lld\n", (a + b) - 2 * c);
    }
    else {
        printf("%lld\n", a + b);
    }

    return 0;
}
