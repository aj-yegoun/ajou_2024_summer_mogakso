#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int candy[1001];
    for (int i = 0; i < n; i++) {
        scanf("%d", &candy[i]);
    }

    qsort(candy, n, sizeof(int), compare); 

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += candy[i]; 
    }

    if (sum % 2 == 1) {
        for (int i = 0; i < n; i++) {
            if (candy[i] % 2 == 1) {
                sum -= candy[i];
                break;
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}
