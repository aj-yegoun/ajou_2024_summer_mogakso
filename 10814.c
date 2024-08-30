#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[101];
    int join_order;
} Member;

int compare(const void* a, const void* b) { // 나이를 기준으로 비교, 나이가 같으면 가입 순서대로 비교
    Member* memberA = (Member*)a;
    Member* memberB = (Member*)b;

    if (memberA->age == memberB->age) {
        return memberA->join_order - memberB->join_order; // 가입 순서 비교
    }
    else {
        return memberA->age - memberB->age; // 나이 비교
    }
}

Member member[100001];

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &member[i].age, member[i].name);
        member[i].join_order = i; // 가입 순서 저장
    }

    qsort(member, n, sizeof(Member), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", member[i].age, member[i].name);
    }

    return 0;
}
