#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        char a[101], b[101];
        scanf("%s %s", &a, &b);

        int length = strlen(a);
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (a[j] != b[j]) {
                count++;
            }
        }

        printf("Hamming distance is %d.\n", count);
    }

    return 0;
}
