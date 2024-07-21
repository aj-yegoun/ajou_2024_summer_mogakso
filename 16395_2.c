#include <stdio.h>
#include <stdlib.h>

int** create(int** p, int n) {

    if (n == 1) {
        p[0][0] = 1;
        return p;
    }
    else {
        create(p, n - 1);
        p[n - 1][0] = 1;
        p[n - 1][n - 1] = 1;
        for (int i = 1; i < n - 1; i++) {
            p[n - 1][i] = p[n - 2][i - 1] + p[n - 2][i];
        }
        return p;
    }

}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int** p = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        p[i] = (int*)malloc(sizeof(int) * (i + 1));
    }

    create(p, n);

    printf("%d\n", p[n - 1][k - 1]);

    for (int i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);

    return 0;
}
