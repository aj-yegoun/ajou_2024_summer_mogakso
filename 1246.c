#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int customer[1000001];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &customer[i]);
    }

    qsort(customer, m, sizeof(int), compare);

    int best_price = 0, max_profit = 0;
    for (int i = 0; i < m; i++) {
        int price = customer[i];
        int max_egg = (m - i < n) ? m - i : n; // 팔 수 있는 계란의 수
        int profit = price * max_egg;

        if (profit > max_profit) {
            max_profit = profit;
            best_price = price;
        }
    }

    printf("%d %d\n", best_price, max_profit);

    return 0;
}
