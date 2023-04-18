#include <stdio.h>

float fahrenheitToCelsius(float t) {
	return (5.0 / 9.0) * (t - 32);
}

int main() {
	float fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		printf("%3.0f\t%6.1f\n", fahr, fahrenheitToCelsius(fahr));
		fahr = fahr + step;
	}

	return 0;
}