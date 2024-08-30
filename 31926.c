#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ans = 10; // 처음 daldidalgo + daldidan 입력하는 데 10초 필요

    int temp = 1; // 초기 기준 temp = 1
    while (n >= temp * 2) { // temp가 두 배가 될 때마다 시간 1초 증가
        ans++;
        temp *= 2;
    }

    printf("%d\n", ans); 

    return 0;
}
