#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int char_to_int(char c) {
    if (c == ' ') return 0;
    if (c >= 'A' && c <= 'Z') return c - 'A' + 1;
    if (c >= 'a' && c <= 'z') return c - 'a' + 27;
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100001];
    int count[53] = { 0 }; // 0 ~ 52의 빈도수 배열 초기화
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    getchar();
    char ciphertext[100001];
    fgets(ciphertext, sizeof(ciphertext), stdin);

    int len = strlen(ciphertext);
    if (ciphertext[len - 1] == '\n') {
        ciphertext[len - 1] = '\0';
    }

    int text_count[53] = { 0 }; // 평문의 빈도수 배열 초기화
    for (int i = 0; i < n; i++) {
        int index = char_to_int(ciphertext[i]);
        text_count[index]++;
    }

    // 두 빈도수 배열 비교
    int match = 1;
    for (int i = 0; i < 53; i++) {
        if (count[i] != text_count[i]) {
            match = 0;
            break;
        }
    }

    if (match) {
        printf("y\n");
    }
    else {
        printf("n\n");
    }

    return 0;
}
