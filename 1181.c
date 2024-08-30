#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    char* str1 = *(char**)a;
    char* str2 = *(char**)b;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return len1 - len2;
    }

    return strcmp(str1, str2);
}

int main() {
    int n;
    scanf("%d", &n);
    char** word = (char**)malloc(sizeof(char*) * n);

    for (int i = 0; i < n; i++) {
        word[i] = (char*)malloc(sizeof(char) * 51);
        scanf("%s", word[i]);
    }

    qsort(word, n, sizeof(char*), compare);

    printf("%s\n", word[0]);
    for (int i = 1; i < n; i++) {
        if (strcmp(word[i], word[i - 1]) != 0) {
            printf("%s\n", word[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        free(word[i]);
    }

    free(word);
    return 0;
}
