#include <stdio.h>

int number_game(int num) {
    int sum = 0;
    for (int i = 2; i <= num; i++) {
        int temp = num;
        while (temp % i == 0) {
            sum++;
            temp /= i;
        }
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int number;
        scanf("%d", &number);
        printf("%d\n", number_game(number));
    }

    return 0;
}
