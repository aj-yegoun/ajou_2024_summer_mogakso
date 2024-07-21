#include <stdio.h>
#include <string.h>

int main() {
    char arr[200];
    scanf("%s", arr);
    char result[200];
    int count = 0;

    for (int i = 0; i < strlen(arr); i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            result[count++] = arr[i];
        }
    }

    result[count] = '\0';
    printf("%s", result);

    return 0;
}
