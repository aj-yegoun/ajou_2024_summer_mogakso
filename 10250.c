#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);

        int room_floor = n % h;
        int room_num = n / h + 1;

        if (room_floor == 0) {
            room_floor = h;
            room_num -= 1;
        }

        printf("%d%02d\n", room_floor, room_num);
    }
    return 0;
}
