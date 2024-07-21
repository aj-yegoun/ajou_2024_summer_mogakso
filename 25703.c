#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("int a;\nint *ptr = &a;\n");
    }
    else if (n == 2) {
        printf("int a;\nint *ptr = &a;\nint **ptr2 = &ptr;\n");
    }
    else {
        printf("int a;\nint *ptr = &a;\nint **ptr2 = &ptr;\n");
        for (int i = 3; i <= n; i++) {
            printf("int ");
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            printf("ptr%d = &ptr%d;\n", i, i - 1);
        }
    }
    return 0;
}
