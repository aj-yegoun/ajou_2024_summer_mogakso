#include <stdio.h>
#include <math.h>

int distance(char tile, int current_x, int current_y) {
    int goal_x, goal_y;

    if (tile == 'A') {
        goal_x = 0; goal_y = 0;
    }
    else if (tile == 'B') {
        goal_x = 0; goal_y = 1;
    }
    else if (tile == 'C') {
        goal_x = 0; goal_y = 2;
    }
    else if (tile == 'D') {
        goal_x = 0; goal_y = 3;
    }
    else if (tile == 'E') {
        goal_x = 1; goal_y = 0;
    }
    else if (tile == 'F') {
        goal_x = 1; goal_y = 1;
    }
    else if (tile == 'G') {
        goal_x = 1; goal_y = 2;
    }
    else if (tile == 'H') {
        goal_x = 1; goal_y = 3;
    }
    else if (tile == 'I') {
        goal_x = 2; goal_y = 0;
    }
    else if (tile == 'J') {
        goal_x = 2; goal_y = 1;
    }
    else if (tile == 'K') {
        goal_x = 2; goal_y = 2;
    }
    else if (tile == 'L') {
        goal_x = 2; goal_y = 3;
    }
    else if (tile == 'M') {
        goal_x = 3; goal_y = 0;
    }
    else if (tile == 'N') {
        goal_x = 3; goal_y = 1;
    }
    else if (tile == 'O') {
        goal_x = 3; goal_y = 2;
    }
    else if (tile == '.') {
        return 0;
    }

    return abs(current_x - goal_x) + abs(current_y - goal_y);
}

int main() {
    char puzzle[5][5];
    int result = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%s", &puzzle[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result += distance(puzzle[i][j], i, j);
        }
    }

    printf("%d\n", result);

    return 0;
}
