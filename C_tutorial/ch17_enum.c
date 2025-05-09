#include <stdio.h>
// Enumeration 
// RED = 0, BLUE = 1, WHITE = 2, BLACK = 3
enum {RED, BLUE, WHITE, BLACK};

int main() {
	int palette = RED;
	switch (palette) {
		case RED:
			printf("palette : RED \n");
			break;
		case BLUE:
			printf("palette : BLUE \n");
			break;
		case WHITE:
			printf("palette : WHITE \n");
			break;
		case BLACK:
			printf("palette : BLACK \n");
			break;
	}
	if (palette == 0) {
		printf("palette : RED \n");
	} else if (palette == 1) {
		printf("palette : BLUE \n");
	} else if (palette == 2) {
		printf("palette : WHITE \n");
	} else if (palette == 3) {
		printf("palette : BLACK \n");
	} else {
		printf("No Color \n");
	}
}
