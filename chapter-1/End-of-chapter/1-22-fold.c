#include <stdio.h>

#define LINELENGTHLIMIT 30
#define TABLENGTH 4

int main() {
	int lineLength;
	char c;

	while ((c = getchar()) != EOF) {
		if (lineLength < LINELENGTHLIMIT) {
			if (c != '\n' && c != '\t') {
				++lineLength;
			}
			else if (c == '\t') {
				lineLength += TABLENGTH;
			}
			else if (c == '\n') {
				lineLength = 0;
			}
			putchar(c);
		}
		else {
			putchar('\n');
			putchar(c);
			lineLength = 0;
		}
	}

	return 0;
}