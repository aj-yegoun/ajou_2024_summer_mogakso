#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, k, p;
    scanf("%d %d %d", &c, &k, &p);

    long long wine = 0;
    for (int i = 1; i <= c; i++) {
        long long temp = k * i + p * i * i;
        wine += temp;
    }

    printf("%lld\n", wine);

    return 0;
}
