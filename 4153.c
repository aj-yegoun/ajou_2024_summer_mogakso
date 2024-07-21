#include <stdio.h>
#include <stdlib.h>

int main() {
    int triangle[3];
    while (1) {
        scanf("%d %d %d", &triangle[0], &triangle[1], &triangle[2]);

        if (triangle[0] == 0 && triangle[1] == 0 && triangle[2] == 0) {
            break;
        }

        int a = triangle[0], b = triangle[1], c = triangle[2];
        if (a * a + b * b == c * c) {
            printf("right\n");
        }
        else if (a * a + c * c == b * b) {
            printf("right\n");
        }
        else if (b * b + c * c == a * a) {
            printf("right\n");
        }
        else {
            printf("wrong\n");
        }
    }
    
    return 0;
}
