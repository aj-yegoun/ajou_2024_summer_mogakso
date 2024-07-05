#include <stdio.h>

int main() {
    int n[10];
    for(int i = 0; i < 5; i++){
        scanf("%d", &n[i]);
    }
    
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += n[i];
    }

    printf("%d", sum);

    return 0;
}
