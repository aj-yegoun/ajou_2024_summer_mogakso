#include <stdio.h>
#define MOD 1234567

int main() {
    long long n;
    scanf("%lld", &n);

    long long count = 0;
    long long start = 1; // 자릿수
    long long length = 1; // k번째 값

    while (start <= n) {
        long long end = start * 10 - 1;
        if (end > n) {
            end = n; // 최댓값(n)보다 클 시, n값으로 업데이트
        }

        count += (end - start + 1) * length; // 필요한 값 += (끝 숫자 + 첫 숫자 - 1) * k
        count %= MOD;
        start *= 10;
        length++;
    }


    printf("%lld", count);
    return 0;
}
