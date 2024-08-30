#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int note[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &note[i]);
    }

    if (note[0] + 1 == note[1]) {
        for (int i = 1; i < 7; i++) {
            if (note[i] + 1 != note[i + 1]) {
                printf("mixed\n");
                return 0;
            }
        }
        printf("ascending\n");
    }
    else if (note[0] - 1 == note[1]) {
        for (int i = 1; i < 7; i++) {
            if (note[i] - 1 != note[i + 1]) {
                printf("mixed\n");
                return 0;
            }
        }
        printf("descending\n");
    }
    else {
        printf("mixed\n");
    }

    return 0;
}
