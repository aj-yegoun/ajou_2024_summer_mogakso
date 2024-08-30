#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long next_prime(long long n) {
    if (n <= 2) return 2; 
    if (n % 2 == 0) n++;

    while (1) {
        int is_prime = 1; // 소수 여부를 판별하는 변수
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            return n; // 소수라면 반환
        }
        n += 2; // 홀수 이동
    }
}

int main() {
    int n;
    scanf("%d", &n);

    long long num = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        long long result = next_prime(num);
        printf("%lld\n", result);
    }

    return 0;
}
