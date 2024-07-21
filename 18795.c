#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	long long* Ai = (long long*)malloc(sizeof(long long) * (n + 1));
	long long* Bi = (long long*)malloc(sizeof(long) * (m + 1));
	for (int i = 0; i < n; i++) {
		scanf("%lld", &Ai[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%lld", &Bi[i]);
	}

	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += Ai[i];
	}
	for (int i = 0; i < m; i++) {
		sum += Bi[i];
	}

	printf("%lld\n", sum);
	return 0;
}