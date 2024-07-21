#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int m, n;
        char word[50][6];
        int password[200][10], k[200];
        scanf("%d", &m);
        for (int j = 0; j < m; j++) {
            scanf("%s", word[j]);
        }
        scanf("%d", &n);
        for (int p = 0; p < n; p++) {
            scanf("%d", &k[p]);
            for (int o = 0; o < k[p]; o++) {
                scanf("%d", &password[p][o]);
            }
        }

        printf("Scenario #%d:\n", i + 1);
        for (int j = 0; j < n; j++) {
            for (int p = 0; p < k[j]; p++) {
                printf("%s", word[password[j][p]]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
