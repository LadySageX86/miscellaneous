// judgement.c
// A simple program demonstrating the RNG of
// Mr. Game and Watch's Judgement move in
// Super Smash Bros. Melee for the Nintendo Gamecube

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int judge(void);

int main(void) {
	int test, hit;
	int prev[2] = { 2, 1 };
	time_t t;
	int control;

	srand((unsigned) time(&t));

	while ((control = getchar()) != EOF) {
		printf("Press enter to swing Mr. Game and Watch's hammer!\n");
		if (control == '\n') {
			while (!hit) {
				test = judge();
				if (test != prev[0] && test != prev[1]) {
					hit = test;
					prev[1] = prev[0];
					prev[0] = hit;
				}
			}

			printf("%d\n", hit);
			hit = 0;
		}
	}

	return 0;
}

int judge(void) {
	return rand() % 9 + 1;
}
