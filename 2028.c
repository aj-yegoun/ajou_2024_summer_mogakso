#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[1001];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0 && (arr[i] * arr[i]) % 10 == arr[i]) {
			printf("YES\n");
		}
		else if (arr[i] > 9 && (arr[i] * arr[i]) % 100 == arr[i]) {
			printf("YES\n");
		}
		else if (arr[i] > 99 && (arr[i] * arr[i]) % 1000 == arr[i]) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}