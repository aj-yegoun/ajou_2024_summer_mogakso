#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n ==1){
        printf("1\n");
        return 0;
    }
    else {
        int a = 2, b = 5;
        int count = 2; // 지나가는 방의 수
        while (1) {
            if (a <= n && a + b >= n) {
                printf("%d\n", count);
                break;
            }
            a = a + b + 1;
            b += 6;
            count++;
        }
    }
    return 0;
}
