#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, w = 0;
    scanf("%d", &n);
    char* eggplant = (char*)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++) {
        scanf(" %s", eggplant[i]);
    }
    int m, k;
    scanf("%d %d", &m, &k);

    for (int i = 0; i < m; i++) {
        int p = 0;
        for (int j = 0; j < k; j++) {
            int x;
            scanf("%d", &x);
            if (eggplant[x - 1] == 'P') {
                p++;
            }
        }
        if (p == 0) {
            w++;
        }
    }

    if (w != 0) {
        printf("W\n");
    }
    else {
        printf("P\n");
    }

    free(eggplant);
    return 0;
}
