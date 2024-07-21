#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, p, q;
    scanf("%d %d %d", &n, &p, &q);
    int strawberry[100], shine_muscat[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &strawberry[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &shine_muscat[i]);
    }

    int result[100];
    for (int i = 0; i < n; i++) {
        int a = strawberry[i];
        int b = shine_muscat[i];
        int count = 0;
        while (a != b) {
            a += p;
            b += q;
            ++count;
            if (count == 10000) {
                printf("NO\n");
                return 0;
            }
        }
        result[i] = count;
    }

    printf("YES\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
