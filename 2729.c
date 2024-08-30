#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char binary[81], numbers[81];
        scanf("%s %s", binary, numbers);
        
        if (strlen(numbers) > strlen(binary)) { // 항상 binary가 더 긴 문자열이 되도록 설정
            char temp[81];
            strcpy(temp, binary);
            strcpy(binary, numbers);
            strcpy(numbers, temp);
        }

        reverse(binary);  // 문자열 뒤집기
        reverse(numbers);

        char ans[82];  // 결과를 저장할 배열
        int carry = 0;  // 캐리 초기화
        int t = 0;  // 결과 배열 인덱스

        // 두 문자열의 공통 길이 만큼 더하기
        for (int j = 0; j < strlen(numbers); j++) {
            int sum = (binary[j] - '0') + (numbers[j] - '0') + carry;  // 자리 수 합
            ans[t] = (sum % 2) + '0';  // 이진수 결과
            carry = sum / 2;  // 새로운 캐리 계산
            t++;
        }

        // 더 긴 문자열 binary의 나머지 자리 더하기
        for (int k = strlen(numbers); k < strlen(binary); k++) {
            int sum = (binary[k] - '0') + carry;
            ans[t] = (sum % 2) + '0';
            carry = sum / 2;
            t++;
        }

        // 최종 캐리 체크
        if (carry == 1) {
            ans[t] = '1';
            t++;
        }
        ans[t] = '\0';

        reverse(ans);  // 결과 문자열 뒤집기

        // 앞의 0을 무시하고 출력
        int flag = 0;  // 처음 1이 나올 때까지 0 무시
        for (int v = 0; v < t; v++) {
            if (ans[v] == '1') flag = 1;  // 1이 나오면 출력 시작
            if (flag) printf("%c", ans[v]);
        }

        if (!flag) printf("0");
        printf("\n");
    }

    return 0;
}
