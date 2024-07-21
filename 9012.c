#include <stdio.h>
#include <string.h>

void Judge_VPS(char ps[]) {
    char vps[51];
    int length = strlen(ps);
    if (ps[0] == ')') {
        printf("NO\n");
        return;
    }
    else if (ps[0] == '(') {
        int p = 1;
        for (int i = 1; i < length; i++) {
            if (ps[i] == '(') {
                p += 1;
            }
            else if (ps[i] == ')') {
                p -= 1;
                if (p < 0) {
                    printf("NO\n");
                    return;
                }
            }
        }
        if (p != 0) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }

    return;
}

int main() {
    int n;
    scanf("%d", &n);
    char ps[51];
    for (int i = 0; i < n; i++) {
        scanf("%s", ps);
        Judge_VPS(ps);
    }
    return 0;
}
