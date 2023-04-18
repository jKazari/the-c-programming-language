#include <stdio.h>

int main() {
	char c;
	char lastC = '\0';

	while ((c = getchar()) != EOF) {
		if (c != ' ' || lastC != ' ')
			putchar(c);
		lastC = c;
	}

	return 0;
}