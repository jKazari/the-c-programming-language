#include <stdio.h>

int main() {
	int blanksNum = 0;
	int tabsNum = 0;
	int newlinesNum = 0;

	char c;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blanksNum;
		else if (c == '\t')
			++tabsNum;
		else if (c == '\n')
			++newlinesNum;
		}

	printf("Blanks: \t%d\nTabs: \t\t%d\nNewlines: \t%d",
		blanksNum, tabsNum, newlinesNum);

	return 0;
}