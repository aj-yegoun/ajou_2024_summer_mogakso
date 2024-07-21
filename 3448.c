#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char sentence;
    int n;
    scanf("%d", &n);
    
    while (n--) {
        int R = 0, A = 0;
        int count = 0;

        while (1) {
            sentence = getchar();

            if (sentence == '\n') {
                count++;
                if (count == 2) {
                    break;
                }
                else {
                    continue;
                }
            }
            else {
                count = 0;
            }

            A++;
            if (sentence != '#') {
                R++;
            }
        }

        int X = (100 * 100 * R / A + 5) / 10;
        printf("Efficiency ratio is %d", X / 10);
        X %= 10;
        if (X > 0) {
            printf(".%d", X);
        }
        printf("%%.\n");

    }
    return 0;
}
