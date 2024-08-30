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
    char binary[81], numbers[81];
    scanf("%s %s", binary, numbers);

    if (strlen(numbers) > strlen(binary)) {
        char temp[81];
        strcpy(temp, binary);
        strcpy(binary, numbers);
        strcpy(numbers, temp);
    }

    reverse(binary); 
    reverse(numbers);

    char ans[82];  
    int carry = 0; 
    int t = 0; 

    for (int i = 0; i < strlen(numbers); i++) {
        int sum = (binary[i] - '0') + (numbers[i] - '0') + carry;
        ans[t] = (sum % 2) + '0'; 
        carry = sum / 2;  
        t++;
    }

    for (int j = strlen(numbers); j < strlen(binary); j++) {
        int sum = (binary[j] - '0') + carry;
        ans[t] = (sum % 2) + '0';
        carry = sum / 2;
        t++;
    }

    if (carry == 1) {
        ans[t] = '1';
        t++;
    }
    ans[t] = '\0';

    reverse(ans);
    int flag = 0;
    for (int k = 0; k < t; k++) {
        if (ans[k] == '1') flag = 1;
        if (flag) printf("%c", ans[k]);
    }

    if (!flag) printf("0");
    printf("\n");

   
    return 0;
}
