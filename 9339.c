#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int k;
        scanf("%d", &k);
        int student_number[101];
        for (int i = 0; i < k; i++) {
            scanf("%d", &student_number[i]);
        }
        int n;
        scanf("%d", &n);

        int best_time = 1000001;
        int count = 0;
        int best_index = -1;

        for (int i = 0; i < n; i++) {
            int number, hour, min;
            scanf("%d %d %d", &number, &hour, &min);

            for (int j = 0; j < k; j++) {
                if (student_number[j] == number) {
                    int total_time = hour * 60 + min;

                    if (total_time >= 0 && total_time <= 6 * 60) {
                        if (total_time < best_time) {
                            best_time = total_time;
                            best_index = j;
                        }
                        count++;
                    }
                    break;
                }
            }
        }

        printf("%d %d\n", student_number[best_index], count);
    }

    return 0;
}
