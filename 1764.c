#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NUMBER 500000

char not_heard[MAX_NUMBER][21];
char result[MAX_NUMBER][21];

int compare(const void* a, const void* b) {
    return strcmp((char*)a, (char*)b);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%s", not_heard[i]);
    }

    qsort(not_heard, n, sizeof(not_heard[0]), compare);

    char temp[21];
    int count = 0;
    for (int i = 0; i < m; i++) {
        scanf("%s", temp);
        if (bsearch(&temp, not_heard, n, sizeof(not_heard[0]), compare) != NULL) {
            strcpy(result[count++], temp);
        }
    }

    qsort(result, count, sizeof(result[0]), compare);

    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%s\n", result[i]);
    }

    return 0;
}