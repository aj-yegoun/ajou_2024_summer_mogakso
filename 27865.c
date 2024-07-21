#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int* count = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 1; i <= n; i++) {
        count[i] == 0;
    }

    srand(time(0));
    
    for (int i = 0; i < 20000; i++) {
        int x = rand() % n + 1;
        printf("? %d\n", x);
        fflush(stdout);

        char respond[2];
        scanf("%s", respond);
        if (respond[0] == 'Y') {
            printf("! %d\n", x);
            fflush(stdout);
            return 0;
        }
        else if (respond[0] == 'N') {
            count[x]++;
        }
    }

    int max_count = 0;
    int answer = 1;
    for (int i = 1; i <= n; i++) { // 빈도수
        if (count[i] > max_count) {
            answer = i;
        }
    }

    printf("! %d\n", answer);
    fflush(stdout);

    return 0;
}
