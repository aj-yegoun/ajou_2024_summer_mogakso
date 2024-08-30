#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) { // 내림차순
    return (*(int*)b - *(int*)a);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int card[101][101];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &card[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        qsort(card[i], m, sizeof(int), compare);
    }

    int count[101] = { 0 };
    for (int i = 0; i < m; i++) {
        int max_value = 0;

        for (int j = 0; j < n; j++) {
            if (card[j][i] > max_value) {
                max_value = card[j][i];
            }
        }

        for (int j = 0; j < n; j++) {
            if (card[j][i] == max_value) {
                count[j]++;
            }
        }
    }

    int max_score = 0;
    for (int i = 0; i < n; i++) {
        if (count[i] > max_score) {
            max_score = count[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (count[i] == max_score) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}
