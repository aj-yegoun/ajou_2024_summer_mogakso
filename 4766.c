#include <stdio.h>

int main() {
	float temperature_1;
	scanf("%f", &temperature_1);
	while (1) {
		float temperature_2;
		scanf("%f", &temperature_2);
		if (temperature_2 == 999) return 0;

		float result = temperature_2 - temperature_1;
		printf("%.2f\n", result);
		temperature_1 = temperature_2;
	}


	return 0;
}