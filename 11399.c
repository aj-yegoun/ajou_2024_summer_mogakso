#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int money[1001];
    for (int i = 0; i < n; i++) {
        scanf("%d", &money[i]);
    }

    qsort(money, n, sizeof(int), compare);

    int temp = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        temp += money[i];
        sum += temp;
    }

    printf("%lld\n", sum);

    return 0;
}
