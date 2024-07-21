#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int table[100000];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &table[i]);
    }

    int flower[100000] = { 0 };  // 꽃을 주는 날을 표시하는 배열
    int length = 0;  // 연속된 음수 기간의 길이를 저장하는 변수
    int maxlength = 0;  // 가장 긴 연속된 음수 기간의 길이를 저장하는 변수

    // 꽃을 주는 날 계산
    for (int i = N - 1; i >= 0; --i) {
        if (table[i] < 0) {
            length++;
            continue;
        }

        // 꽃을 주는 날 표시
        for (int j = 0; j < length * 2; ++j) {
            if ((i - j) >= 0) {
                flower[i - j] = 1;
            }
        }

        // 가장 긴 연속된 음수 기간의 길이 업데이트
        if (length > maxlength) {
            maxlength = length;
        }
        length = 0;
    }

    int ans = 0;
    // 꽃을 주는 총 날 수 계산
    for (int i = 0; i < N; ++i) {
        ans += flower[i];
    } // +1

    int maxidx = 0;
    int maxcount = 0;
    length = 0;

    // 최적의 꽃을 주는 날 계산 +2에 추가 계산
    for (int i = N - 1; i >= 0; --i) {
        if (table[i] < 0) {
            length++;
            continue;
        }

        if (length == maxlength) {
            int count = 0;
            // 최적의 기간 동안 꽃을 주는 최대 일수 계산
            for (int j = 0; j < length * 3; ++j) {
                if ((i - j) >= 0 && flower[i - j] == 0) {
                    count++;
                }
            }

            // 주어진 일수가 더 많을 때 최대 꽃의 수 업데이트
            if (count > maxcount) {
                maxcount = count;
                maxidx = i;
            }
        }

        length = 0;
    }

    printf("%d\n", ans + maxcount);

    return 0;
}
