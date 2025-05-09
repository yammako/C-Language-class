#include <stdio.h>
int main() {
	// Array
	int score[3][2];
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (j == 0) {
				printf("%d Student's Korean score: ", i + 1);
				scanf("%d", &score[i][j]);
			} else if (j == 1) {
				printf("%d Student's Math score: ", i + 1);
				scanf("%d", &score[i][j]);
			}
		}
	}

	for (i = 0; i < 3; i++) {
		printf("%d Student Korean score: %d, Math score: %d \n", i+1, score[i][0], score[i][1]);
	}
	return 0;
}
