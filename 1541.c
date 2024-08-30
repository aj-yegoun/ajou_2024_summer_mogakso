#include <stdio.h>
#include <string.h>

int main() {
    char equation[51];
    scanf("%s", equation);

    int sum = 0;
    int temp = 0;
    int sign = 1; // 현재 연산의 부호 -> 1은 덧셈, -1은 뺄셈
    int length = strlen(equation);
    int i = 0;

    for (i = 0; i < length; i++) {
        if (equation[i] >= '0' && equation[i] <= '9') {
            temp = temp * 10 + (equation[i] - '0');
        }
        else {
            sum += sign * temp;
            temp = 0;

            if (equation[i] == '-') {
                sign = -1; // 부호 뺄셈으로 변경
            }
        }
    }

    sum += sign * temp;

    printf("%d\n", sum);

    return 0;
}
