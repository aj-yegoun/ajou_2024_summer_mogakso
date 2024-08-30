#include <stdio.h>
#include <string.h>

int count = 0;

void check(char word[]) {
    char temp[26] = { 0 };
    int index = 1, group = 1;

    while (word[index] != '\0') {
        if (temp[word[index] - 'a'] == 1) {
            group = 0;
            break;
        }
        if (word[index] != word[index - 1]) {
            ++temp[word[index - 1] - 'a'];
        }
        ++index;
    }
    count += group;
}

int main() {
    int n;
    scanf("%d", &n);

    char word[101];
    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        check(word);
    }

    printf("%d\n", count);
    return 0;
}
