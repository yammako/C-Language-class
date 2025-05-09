#include <stdio.h>
int main() {
	int a;
	int *p;		// pointer
	a = 2;
	p = &a;		// p is pointer of a. Thus, it has the address of a
	// print address of variable a using "&"
	printf("%p \n", &a);	// print address of variable a using "&"
	printf("Value of p: %p \n", p);		// print value of pointer p
	printf("Address of a: %p \n", &a);	// print address of a using "&"
	printf("Value of *p: %d \n", *p);	// print value of the position which is indicated by pointer p
	*p = 3;		// Using pointer p, the value of a can be changed.
	printf("Value of a: %d \n", a);
	printf("Value of *p: %d \n", *p);
	// pointer is variable and it has type
	int b;
	p = &a;		// pointer indicates "a"
	*p = 2;		// a = 2
	p = &b;		// pointer indicates "b"
	*p = 4;		// b = 4
	printf("a : %d \n", a);
	printf("b : %d \n", b);
	return 0;
}
