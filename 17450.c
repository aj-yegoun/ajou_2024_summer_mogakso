#include <stdio.h>

double calculate(int price, int weight) {
    int total_price = price * 10;
    double value;

    if (total_price >= 5000) {
        total_price -= 500;
    }

    value = (weight * 10.0) / total_price;

    return value;
}

int main() {
    int s_price, s_weight;
    int n_price, n_weight;
    int u_price, u_weight;

    scanf("%d %d", &s_price, &s_weight);
    scanf("%d %d", &n_price, &n_weight);
    scanf("%d %d", &u_price, &u_weight);

    double s_value = calculate(s_price, s_weight);
    double n_value = calculate(n_price, n_weight);
    double u_value = calculate(u_price, u_weight);

    if (s_value > n_value && s_value > u_value) {
        printf("S\n");
    }
    else if (n_value > s_value && n_value > u_value) {
        printf("N\n");
    }
    else {
        printf("U\n");
    }

    return 0;
}
