#include <stdio.h>
struct employee {
	int age;
	int salary;
};

struct company {
	struct employee data;	// struct in struct
	char name[10];
};

int main() {
	struct company Kim;
	Kim.data.age = 31;
	Kim.data.salary = 30000000;

	printf("Kim's age: %d \n", Kim.data.age);
	printf("Kim's salary: %d $/year \n", Kim.data.salary);

	return 0;
}
