#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char vision_test_data[101][101];
    for (int i = 0; i < n; i++) {
        scanf("%s", vision_test_data[i]);
    }

    int start_row = -1, start_col = -1;
    int end_row = -1, end_col = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vision_test_data[i][j] == '#') {
                if (start_row == -1) {
                    start_row = i;
                    start_col = j;
                }
                end_row = i;
                end_col = j;
            }
        }
    }

    int height = end_row - start_row + 1;
    int width = end_col - start_col + 1;

    if (width >= height) {
        int mid_col = start_col + width / 2;

        if (vision_test_data[start_row][mid_col] == '.') {
            printf("UP\n");
            return 0;
        }

        if (vision_test_data[end_row][mid_col] == '.') {
            printf("DOWN\n");
            return 0;
        }
    }

    if (height >= width) {
        int mid_row = start_row + height / 2;

        if (vision_test_data[mid_row][start_col] == '.') {
            printf("LEFT\n");
            return 0;
        }

        if (vision_test_data[mid_row][end_col] == '.') {
            printf("RIGHT\n");
            return 0;
        }
    }

    return 0;
}
