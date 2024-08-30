#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char n[6];
        scanf("%s", &n);
        if (strcmp(n, "0") == 0) return 0;

        int length = strlen(n);
        int flag = 1;
        for (int i = 0; i < length; i++) {
            if (n[i] == n[length - i - 1]) {
                continue;
            }
            else {
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}
