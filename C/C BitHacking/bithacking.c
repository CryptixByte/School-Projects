#include <stdio.h>
#include "bithacking.h"

#define num_questions 5
#define BEEF (1 << 0)
#define CHICKEN (1 << 1)
#define LETTUCE (1 << 2)
#define CHEESE (1 << 3)
#define SHELL (1 << 4)

void bithacking() {
	int yesCount = 0;
	int options = 0;
	char choice;
	char *questions[num_questions] = {
		"Do you want beef[y/n]: ",
		"Do you want chicken[y/n]: ",
		"Do you want lettuce[y/n]: ",
		"Do you want cheese[y/n]: ",
		"Do you want a shell[y/n]: "
	};
	unsigned int bitset[num_questions] = {
		BEEF,
		CHICKEN,
		LETTUCE,
		CHEESE,
		SHELL,
	};

	for (int i = 0; i < num_questions; i++) {
		printf("%s", questions[i]);
		scanf(" %c", &choice);
		if (choice == 'y' || choice == 'Y') {
			options |= bitset[i];
		}
	}
	for (int i = 0; i < num_questions; i++) {
		if (options & bitset[i]) {
			yesCount++;
		}
	}
	printf("Number of Yes's: %d\n", yesCount);
	if (options & BEEF)
		printf("Here's some beef.\n");
	if (options & CHICKEN)
		printf("Here's some chicken.\n");
	if (options & LETTUCE)
		printf("Here's some lettuce.\n");
	if (options & CHEESE)
		printf("Here's some cheese.\n");
	if (options & SHELL)
		printf("Here's a shell.\n");
	if (!(options & SHELL))
		printf("A Taco Salad Nice Choice.\n");
}
