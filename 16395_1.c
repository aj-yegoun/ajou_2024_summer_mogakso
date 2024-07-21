#include <stdio.h>
#include <string.h>

int Pascal_Triangle(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return Pascal_Triangle(n - 1, k - 1) + Pascal_Triangle(n - 1, k);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d\n", Pascal_Triangle(n - 1, k - 1));
    return 0;
}
