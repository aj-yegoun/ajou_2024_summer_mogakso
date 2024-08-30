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
    getchar();

    char** record = (char**)malloc(sizeof(char*) * n);
    char** boj = (char**)malloc(sizeof(char*) * n);

    int boj_count = 0;
    int other_count = 0;

    for (int i = 0; i < n; i++) {
        record[i] = (char*)malloc(sizeof(char) * 101);
        scanf("%[^\n]%*c", record[i]);

        if (strncmp(record[i], "boj.kr", 6) == 0) {
            boj[boj_count] = record[i]; // boj.kr로 시작하는 문자열
            boj_count++;
        }
        else {
            record[other_count] = record[i]; // 그 외 문자열
            other_count++;
        }
    }

    qsort(record, other_count, sizeof(char*), compare); // "boj.kr"로 시작하지 않는 문자열 정렬


    qsort(boj, boj_count, sizeof(char*), compare); // "boj.kr"로 시작하는 문자열 정렬

    for (int i = 0; i < other_count; i++) { // "boj.kr"로 시작하지 않는 문자열 출력
        printf("%s\n", record[i]);
    }

    for (int i = 0; i < boj_count; i++) { // "boj.kr"로 시작하는 문자열 출력
        printf("%s\n", boj[i]);
    }

    for (int i = 0; i < other_count; i++) {
        free(record[i]);
    }
    for (int i = 0; i < boj_count; i++) {
        free(boj[i]);
    }
    free(record);
    free(boj);

    return 0;
}
