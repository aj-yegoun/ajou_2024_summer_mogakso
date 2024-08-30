#include <stdio.h>

int main() {
    int h, w, n, m;
    scanf("%d %d %d %d", &h, &w, &n, &m);

    int row = h - 1, col = w - 1;
    int row_sum = 1;
    int col_sum = 1;
    while (1) {
        row -= n + 1;
        if (row >= 0) {
            row_sum++;
        }
        else {
            break;
        }
    }
    while (1) {
        col -= m + 1;
        if (col >= 0) {
            col_sum++;
        }
        else {
            break;
        }
    }
    
    int result = row_sum * col_sum;
    printf("%d\n", result);

    return 0;
}
