#include <stdio.h>
struct AA function(int j);		// struct function. It returns struct type.

// struct type
struct AA {
	int i;
};

// struct type variable "Ball"
struct obj {
	int x, y;
} Ball;

struct HUMAN {
	int age;
	int height;
	int weight;
	int gender;
};

// Union shares the memory for all members.
union A {
	int i;
	char j;
};

int Print_Status(struct HUMAN human) {
	if (human.gender == 0) {
		printf("MALE \n");
	} else {
		printf("FEMALE \n");
	}

	printf("AGE: %d / Height: %d / Weight: %d \n", human.age, human.height, human.weight);

	if (human.gender == 0 && human.height >= 180) {
		printf("HE IS A WINNER!! \n");
	} else if (human.gender == 0 && human.height < 180) {
		printf("HE IS A LOSER!! \n");
	}

	printf("------------------------------------------- \n");

	return 0;
}

int main() {
	struct AA a;		// a is struct AA.
	a = function(10);	// calling function. It returns struct.
	printf("a.i: %d \n", a.i);

	struct HUMAN Adam = {31, 182, 75, 0};	// Initialize the members of struct
	struct HUMAN Eve = {72, 165, 48, 1};

	union A aa;
	aa.i = 345;
	printf("aa.i: %d \n", aa.i);
	Print_Status(Adam);
	Print_Status(Eve);
	
	Ball.x = 3;
	Ball.y = 4;
	printf("Ball.x: %d \n", Ball.x);
	printf("Ball.y: %d \n", Ball.y);

	return 0;
}

struct AA function(int j) {
	struct AA A;
	A.i = j;
	return A;
}
