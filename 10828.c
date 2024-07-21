#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100000

typedef struct {
    int data[MAX];
    int top;
} Stack;

void init(Stack* s) {
    s->top = -1;
}

void push(Stack* s, int x) {
    if (s->top < MAX - 1) { // 스택이 가득 차지 않은 경우
        s->data[++(s->top)] = x; // top을 1 증가시키고 그 위치에 x 저장
    }
}

int pop(Stack* s) {
    if (s->top == -1) {
        return -1;
    }
    return s->data[(s->top)--];
}

int top(Stack* s) {
    if (s->top == -1) {
        return -1;
    }
    return s->data[s->top];
}

int empty(Stack* s) {
    return s->top == -1;
}

int size(Stack* s) {
    return s->top + 1;
}

int main() {
    Stack stack;
    init(&stack);

    int n;
    scanf("%d", &n);
    int x;
    char command[10];
    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        if (strcmp(command, "push") == 0) {
            scanf("%d", &x);
            push(&stack, x);
        }
        else if (strcmp(command, "pop") == 0) {
            printf("%d\n", pop(&stack));
        }
        else if (strcmp(command, "size") == 0) {
            printf("%d\n", size(&stack));
        }
        else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty(&stack));
        }
        else if (strcmp(command, "top") == 0) {
            printf("%d\n", top(&stack));
        }
    }
    return 0;
}
