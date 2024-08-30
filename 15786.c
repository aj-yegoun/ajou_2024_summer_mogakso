#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char remember_password[101];
    scanf("%s", remember_password);
    for (int i = 0; i < m; i++) {
        char sticky_note[1001];
        scanf("%s", sticky_note);
        
        int temp = 0;
        for (int j = 0; j < strlen(sticky_note); j++) {
            if (remember_password[temp] == sticky_note[j]) {
                temp++;
            }
            if (temp == n) {
                break;
            }
        }

        if (temp == n) printf("true\n");
        else printf("false\n");
    }

    return 0;
}
