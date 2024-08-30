#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int score[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &score[i]);
    }

    int temp[8];
    for (int i = 0; i < 8; i++) {
        temp[i] = score[i];
    }

    qsort(score, 8, sizeof(int), compare);

    int sum = 0;
    for (int i = 7; i >= 3; i--) {
        sum += score[i];
    }

    printf("%d\n", sum);
    int result[5];
    int k = 0;
    for (int i = 7; i >= 3; i--) {
        for (int j = 0; j < 8; j++) {
            if (temp[j] == score[i]) {
                result[k++] = j;
                break;
            }
        }
    }

    qsort(result, 5, sizeof(int), compare);

    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i] + 1);
    }
    return 0;
}
