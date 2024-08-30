#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10000

int deque[MAX_SIZE];
int front_index = 0;
int back_index = 0;

void push_front(int x) { // 덱의 앞에 추가
    front_index = (front_index - 1 + MAX_SIZE) % MAX_SIZE;
    deque[front_index] = x;
}

void push_back(int x) { // 덱의 뒤에 추가
    deque[back_index] = x;
    back_index = (back_index + 1) % MAX_SIZE;
}

int pop_front() { // 덱의 가장 앞에 있는 수 출력하고 제거
    if (front_index == back_index) {
        return -1;
    }
    else {
        int value = deque[front_index];
        front_index = (front_index + 1) % MAX_SIZE;
        return value;
    }
}

int pop_back() { // 덱의 가장 뒤에 있는 수 출력하고 제거
    if (front_index == back_index) {
        return -1;
    }
    else {
        back_index = (back_index - 1 + MAX_SIZE) % MAX_SIZE;
        return deque[back_index];
    }
}

int size() {
    return (back_index - front_index + MAX_SIZE) % MAX_SIZE;
}

int empty() {
    return front_index == back_index ? 1 : 0;
}

int front() { // 덱의 가장 앞에 있는 수 출력
    if (front_index == back_index) {
        return -1;
    }
    else {
        return deque[front_index];
    }
}

int back() { // 덱의 가장 뒤에 있는 수 출력
    if (front_index == back_index) {
        return -1;
    }
    else {
        return deque[(back_index - 1 + MAX_SIZE) % MAX_SIZE];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char command[MAX_SIZE];
    int x;

    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (strcmp(command, "push_front") == 0) {
            scanf("%d", &x);
            push_front(x);
        }
        else if (strcmp(command, "push_back") == 0) {
            scanf("%d", &x);
            push_back(x);
        }
        else if (strcmp(command, "pop_front") == 0) {
            printf("%d\n", pop_front());
        }
        else if (strcmp(command, "pop_back") == 0) {
            printf("%d\n", pop_back());
        }
        else if (strcmp(command, "size") == 0) {
            printf("%d\n", size());
        }
        else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty());
        }
        else if (strcmp(command, "front") == 0) {
            printf("%d\n", front());
        }
        else if (strcmp(command, "back") == 0) {
            printf("%d\n", back());
        }
    }

    return 0;
}
