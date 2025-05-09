#include <stdio.h>
// Global variables
int how_many_called = 0;
int how_many_called2 = 0;

int* function() {
	static int a = 2;	// Variable is static. It does not destroy when it is out of scope.
	return &a;
}

int function1() {
	how_many_called++;
	printf("function1 called : %d \n", how_many_called);

	return 0;
}

int function2() {
	how_many_called2++;
	printf("function2 called : %d \n", how_many_called2);

	return 0;
}


int main() {
	int* pa = function();
	printf("*pa : %d \n", *pa);

	function1();
	function2();
	function1();
	function2();
	function2();
	function2();
	function1();
	function1();
	function2();

	return 0;
}
