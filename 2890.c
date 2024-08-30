#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    char kayak[50][51];
    for (int i = 0; i < r; i++) {
        scanf("%s", kayak[i]);
    }

    int distance[10] = { 0 };
    int result[10] = { 0 };

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (kayak[i][j] >= '1' && kayak[i][j] <= '9') {
                int index = kayak[i][j] - '0';
                distance[index] = c - j - 1;
                break;
            }
        }
    }

    int temp[9];
    for (int i = 0; i < 9; i++) {
        temp[i] = distance[i + 1];
    }

    qsort(temp, 9, sizeof(int), compare);

    int rank = 1;
    for (int i = 0; i < 9; i++) {
        for (int j = 1; j <= 9; j++) { // 순위
            if (distance[j] == temp[i] && result[j] == 0) {
                result[j] = rank;
            }
        }
        if (i < 8 && temp[i] != temp[i + 1]) {
            rank++;
        }
    }

    for (int i = 1; i <= 9; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
