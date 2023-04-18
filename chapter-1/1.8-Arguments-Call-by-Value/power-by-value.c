#include <stdio.h>

int power(int m, int n) {
	int p;
	
	for (p = 1; n > 0; --n)
	{
		p *= m;
	}

	return p;
}

int main() {
	for (int i = 0; i < 10; ++i) {
		printf("%d %d %d\n", i, power(2, i), power(-3, i));
	}
	return 0;
}