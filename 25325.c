#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 10
#define MAX_LIKES 100

typedef struct {
	char name[MAX_NAME_LENGTH + 1];
	int likes_counts;
} Students;

int compare(const void* a, const void* b) {
	Students* studentA = (Students*)a;
	Students* studentB = (Students*)b;

	if (studentB->likes_counts != studentA->likes_counts) {
		return studentB->likes_counts - studentA->likes_counts; // 인기도가 높은 순으로 정렬
	}
	return strcmp(studentA->name, studentB->name); // 인기도가 같을 경우, 이름 순으로 정렬
}

int main() {
	int n;
	scanf("%d", &n);

	Students* students = (Students*)malloc(sizeof(Students) * n);
	char** likes = (char**)malloc(sizeof(char*) * n);

	for (int i = 0; i < n; i++) { // 학생 이름 입력
		scanf("%s", students[i].name);
		students[i].likes_counts = 0;
		likes[i] = (char*)malloc(sizeof(char) * (MAX_NAME_LENGTH * MAX_LIKES));
	}
	for (int i = 0; i < n; i++) { // 좋아하는 사람 목록 입력
		scanf(" %[^\n]", likes[i]);
	}

	for (int i = 0; i < n; i++) {
		char* token = strtok(likes[i], " ");
		while (token != NULL) {
			for (int j = 0; j < n; j++) {
				if (strcmp(token, students[j].name) == 0) {
					students[j].likes_counts++;
				}
			}
			token = strtok(NULL, " ");
		}
	}

	qsort(students, n, sizeof(Students), compare);

	for (int i = 0; i < n; i++) {
		printf("%s %d\n",students[i].name, students[i].likes_counts);
	}

	for (int i = 0; i < n; i++) {
		free(likes[i]);
	}
	free(likes);
	return 0;
}