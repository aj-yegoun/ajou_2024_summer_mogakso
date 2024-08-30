#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int* stock_price = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &stock_price[i]);
    }

    int max_profit = 0;
    int min_price = stock_price[0];

    for (int i = 1; i < n; i++) {
        if (stock_price[i] < min_price) { // 최소값 갱신
            min_price = stock_price[i];
        }
        else { // 최소값이 아니면, 이익 계산
            int profit = stock_price[i] - min_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }

    printf("%d\n", max_profit);

    free(stock_price);

    return 0;
}
