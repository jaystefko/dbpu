#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 8
#define BORDER MAX - 1

int main() {
	int i, j, x, y, input, isGameOn;
	int lab[MAX][MAX] = {
		{4, 0, 1, 1, 1, 1, 1, 1},
		{0, 0, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 1, 0, 0},
		{1, 1, 1, 1, 0, 0, 0, 1},
		{1, 0, 0, 0, 1, 0, 1, 1},
		{1, 1, 1, 0, 0, 0, 1, 1},
		{1, 0, 0, 0, 1, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1}
	};
    x = 0;
	y = 0;
	isGameOn = 1;

	do {
		printf("Labirynth:\n");
		for(i = 0; i < MAX; i++) {
			for(j = 0; j < MAX; j++) {
				printf("%d\t", lab[i][j]);
			}
			printf("\n");
		}
		printf("What do you want to do? (1 - go up; 2 - go right, 3 - go down, 4 - go left, else - exit)\n");
		scanf("%d", &input);

		switch (input) {
			case 1: {
				if (x == 0 || lab[x - 1][y] == 1) printf("Wall!\n");
				else {
					lab[x][y] = 0;
					x -= 1;
					lab[x][y] = 4;
				}
				break;
			}
			case 2: {
				if (lab[x][y + 1] == 1) printf("Wall!\n");
				else {
					lab[x][y] = 0;
					y += 1;
					lab[x][y] = 4;
				}
				break;
			}
			case 3: {
				if (lab[x + 1][y] == 1) printf("Wall!\n");
				else {
					lab[x][y] = 0;
					x += 1;
					lab[x][y] = 4;
				}
				break;
			}
			case 4: {
				if (y == 0 || lab[x][y - 1] == 1) printf("Wall!\n");
				else {
					lab[x][y] = 0;
					y -= 1;
					lab[x][y] = 4;
				}
				break;
			}
			default: {
				isGameOn = 0;
				break;
			}
		}

		if (isGameOn == 0) break;

		if (x == BORDER || y == BORDER) {
			printf("***\nYayyyy! You are free - congrats!\n***\n");
			isGameOn = 0;
			break;
		}
	} while (isGameOn == 1);
	
	printf("Thank you for a game! See you later!\n");
	
	return 0;
}