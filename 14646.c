#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num[200002];
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &num[i]);
    }

    int sticker_count = 0;
    int max_sticker = 0;
    int check_sticker[200002] = { 0, };
    for (int i = 0; i < 2 * n; i++) {
        int current = num[i];
        if (check_sticker[current]) { // 이미 스티커가 붙어있는 칸이면 스티커 떼기
            sticker_count--;
            check_sticker[current] = 0;
        }
        else { // 아직 스티커가 붙여져있지 않으면 스티커 붙이기
            sticker_count++;
            check_sticker[current] = 1;
            if (sticker_count > max_sticker) {
                max_sticker = sticker_count;
            }
        }
    }

    printf("%d\n", max_sticker);
    return 0;
}
