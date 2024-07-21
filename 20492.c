#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int n1 = n - n * 0.22, n2 = n - n * 0.2 * 0.22;
    printf("%d %d", n1, n2);
    return 0;
}
