#include <stdio.h>
// Structure is a array which has different type of elements.
// Define structure
// struct Name {
//	Member1;
//	Member2;
//  ....
// };
struct Human {
	// Member
	int age;
	int height;
	int weight;
};

int main() {
	struct Human Psi;

	Psi.age = 99;
	Psi.height = 185;
	Psi.weight = 80;

	printf("Information for Psi \n");
	printf("Age: %d \n", Psi.age);
	printf("Height: %d \n", Psi.height);
	printf("Weight: %d \n", Psi.weight);
	return 0;
}
