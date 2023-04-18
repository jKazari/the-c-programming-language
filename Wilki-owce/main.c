#include <stdio.h>
#include <stdlib.h>

int sheeps, wolfs, eatenSheeps;

enum Forms {
	FORM1 = 0,
	FORM2 = 1,
	FORM3 = 2
};

const char* Conjugations[7][3] = {
	{"pasla", "pasly", "paslo"},
	{"owca", "owce", "owiec"},
	{"przyszedl", "przyszly", "przyszlo"},
	{"wilk", "wilki", "wilkow"},
	{"zjadl", "zjadly", "zjadlo"},
	{"owcee", "owce", "owiec"}, 
	{"byla", "byly", "bylo"}
};

int whichForm(int n) {
	if ((n % 100 >= 12) && (n % 100 <= 14))
		return FORM3;

	else if (n == 1)
		return FORM1;

	else if ((n % 10 >= 2) && (n % 10 <= 4))
		return FORM2;

	else
		return FORM3;
};

int main() {
	scanf("%d", &sheeps);
	scanf("%d", &wolfs);
	scanf("%d", &eatenSheeps);

	if (sheeps < 1 || wolfs < 1 || eatenSheeps < 0 || sheeps < eatenSheeps) {
		printf("Incorrect data");
		return 0;
	}

	printf("Na lace %s sie %d %s. Wieczorem %s %d %s i %s %d %s. ",
		Conjugations[0][whichForm(sheeps)], sheeps,
		Conjugations[1][whichForm(sheeps)],
		Conjugations[2][whichForm(wolfs)], wolfs,
		Conjugations[3][whichForm(wolfs)],
		Conjugations[4][whichForm(wolfs)], eatenSheeps,
		Conjugations[5][whichForm(eatenSheeps)]
	);

	if (sheeps == eatenSheeps)
		printf("Rano na lace nie bylo juz owiec");

	else
		printf("Rano na lace %s juz tylko %d %s",
			Conjugations[6][whichForm(sheeps - eatenSheeps)], sheeps - eatenSheeps,
			Conjugations[1][whichForm(sheeps - eatenSheeps)]
		);

	return 0;
}