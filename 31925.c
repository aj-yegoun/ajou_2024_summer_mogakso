#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[12];
    char status[8];
    char award[8];
    int shake_award;
    int apc_award;
} APC2shake;

int compareAPC(const void* a, const void* b) {
    APC2shake* pa = (APC2shake*)a;
    APC2shake* pb = (APC2shake*)b;
    return pa->apc_award - pb->apc_award;
}

int compareName(const void* a, const void* b) {
    char** nameA = (char**)a;
    char** nameB = (char**)b;
    return strcmp(*nameA, *nameB);
}

int main() {
    int n;
    scanf("%d", &n);

    APC2shake* apc2shake = (APC2shake*)malloc(sizeof(APC2shake) * n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s %s %d %d", apc2shake[i].name, apc2shake[i].status, apc2shake[i].award, &apc2shake[i].shake_award, &apc2shake[i].apc_award);
    }

    qsort(apc2shake, n, sizeof(APC2shake), compareAPC);

    int count = 0;
    char** participate_people = (char**)malloc(sizeof(char*) * n);

    for (int i = 0; i < n; i++) {
        if (strcmp(apc2shake[i].status, "jaehak") == 0 &&
            strcmp(apc2shake[i].award, "notyet") == 0 &&
            (apc2shake[i].shake_award > 3 || apc2shake[i].shake_award == -1)) {
            participate_people[count] = (char*)malloc(sizeof(char) * 12);
            strcpy(participate_people[count], apc2shake[i].name);
            count++;
            if (count == 10) break;
        }
    }

    qsort(participate_people, count, sizeof(char*), compareName);

    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%s\n", participate_people[i]);
    }

    for (int i = 0; i < count; i++) {
        free(participate_people[i]);
    }
    free(participate_people);
    free(apc2shake);

    return 0;
}
