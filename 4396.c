#include <stdio.h>

int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[8] = { -1, 0, 1, -1, 1, -1, 0 ,1 };

int main() {
    int n;
    scanf("%d", &n);
    char mine[10][10];
    for (int i = 0; i < n; i++) { // 지뢰 위치 입력
        scanf("%s", mine[i]);
    }
    char open[10][10];
    for (int i = 0; i < n; i++) { // 플레이어가 연 칸들 입력
        scanf("%s", open[i]);
    }

    char result[10][10];
    for (int i = 0; i < n; i++) { // 결과판 초기화
        for (int j = 0; j < n; j++) {
            result[i][j] = '.';
        }
    }

    int mine_exploded = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (open[i][j] == 'x') {
                if (mine[i][j] == '*') {
                    mine_exploded = 1; // 지뢰를 밟음
                }
                else { // 주변 지뢰 개수 세기
                    int mine_count = 0;
                    for (int k = 0; k < 8; k++) {
                        int x = i + dx[k];
                        int y = j + dy[k];
                        if (x >= 0 && x < n && y >= 0 && y < n && mine[x][y] == '*') {
                            mine_count++;
                        }
                    }
                    result[i][j] = mine_count + '0';
                }
            }
        }
    }

    // 만약 지뢰를 밟았을 경우, 모든 지뢰 위치 표시
    if (mine_exploded == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mine[i][j] == '*') {
                    result[i][j] = '*';
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}