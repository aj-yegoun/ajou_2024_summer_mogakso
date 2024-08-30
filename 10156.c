#include <stdio.h>
#include <stdlib.h>

int main() {
    int k, n, m;
    scanf("%d %d %d", &k, &n, &m);

    long long result = (k * n) - m;
    if (result <= 0) {
        printf("0\n");
    }
    else {
        printf("%lld\n", result);
    }

    return 0;
}
