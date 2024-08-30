#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void number_to_word(int num, char* word) {
    const char* one_to_nineteen[] = {
        "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };
    const char* tens[] = {
    "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
    };
    const char* hundreds[] = {
        "", "onehundred", "twohundred", "threehundred", "fourhundred", "fivehundred", "sixhundred", "sevenhundred", "eighthundred", "ninehundred"
    };

    if (num < 20) { // 1 ~ 19
        strcpy(word, one_to_nineteen[num]);
    }
    else if (num < 100) { // ~ 99
        strcpy(word, tens[num / 10]);
        strcat(word, one_to_nineteen[num % 10]);
    }
    else {
        strcpy(word, hundreds[num / 100]); // 백의 자리
        if (num % 100 < 20) { // 1 ~ 19
            strcat(word, one_to_nineteen[num % 100]);
        }
        else {
            strcat(word, tens[(num % 100) / 10]);
            strcat(word, one_to_nineteen[num % 10]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char word[20][51];
    for (int i = 0; i < n; i++) {
        scanf("%s", word[i]);
    }

    int word_len_sum = 0;
    int index;
    for (int i = 0; i < n; i++) {
        if (strcmp(word[i], "$") == 0) {
            index = i;
        }
        else {
            word_len_sum += strlen(word[i]);
        }
    }

    char number_word[31];
    for (int i = 1; i < 1000; i++) {
        number_to_word(i, number_word);
        if (word_len_sum + strlen(number_word) == i) {
            strcpy(word[index], number_word);
            break;
        }
    }

    for (int i = 0; i < n; i++) {
         printf("%s ", word[i]);
    }
    printf("\n");
    return 0;
}
