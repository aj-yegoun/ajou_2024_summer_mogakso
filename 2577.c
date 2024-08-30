#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    long long multiply = (long long)a * b * c;

    char str[20];
    sprintf(str, "%lld", multiply); // 숫자 -> 문자열

    int result[10] = { 0 };

    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        result[str[i] - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
