#include <stdio.h>
#include <string.h>

int main() {
    char bulbs[1001];
    int n, count = 0;

    scanf("%s", bulbs);
    n = strlen(bulbs);

    for (int i = 0; i < n; i++) {
        if (bulbs[i] == 'Y') { // 전구가 켜져 있는 경우, 해당 전구 번호를 스위치로 보고, 해당 전구 번호의 배수 위치에 있는 전구들을 모두 반전
            for (int j = i; j < n; j += (i + 1)) {
                bulbs[j] = (bulbs[j] == 'Y') ? 'N' : 'Y';
            }
            count++;
        }
    }

    int all_off = 1; // 모든 전구가 'N' 상태인지 확인
    for (int i = 0; i < n; i++) {
        if (bulbs[i] == 'Y') {
            all_off = 0;
            break;
        }
    }

    if (all_off) {
        printf("%d\n", count);
    }
    else {
        printf("-1\n");
    }

    return 0;
}
