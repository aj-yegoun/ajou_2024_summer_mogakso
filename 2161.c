#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int card[1001];
    for (int i = 1; i <= n; i++) {
        card[i] = i;
    }
    
    while (n > 0) {
        printf("%d ", card[1]);
        for (int i = 1; i <= n; i++) {
            card[i] = card[i + 1];
        }
        n--;
        int temp = card[1];
        for (int i = 1; i <= n; i++) {
            card[i] = card[i + 1];
        }
        card[n] = temp;
    }

    return 0;
}
