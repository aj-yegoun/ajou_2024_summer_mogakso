#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (m == 1 || m == 2) {
        printf("NEWBIE!\n");
    }
    else if (m > n) {
        printf("TLE!\n");
    }
    else if (m <= n) {
        printf("OLDBIE!\n");
    }
    return 0;
}
