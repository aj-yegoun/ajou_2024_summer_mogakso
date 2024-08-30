#include <stdio.h>
#include <string.h>


int main() {
    int n;
    scanf("%d", &n);
    char palindrom[101][101];
    for (int i = 0; i < n; i++) {
        scanf("%s", palindrom[i]);
    }

    int first_char = palindrom[0][0] - 'a';
    for (int i = 0; i < n; i++) {
        int next_char = palindrom[i][0] - 'a';
        if (first_char != next_char) {
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");

    return 0;
}
