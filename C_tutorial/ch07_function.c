#include <stdio.h>
int print_hello() {
	printf("Hello! \n");
	return 0;
	printf("I cannot be implemented.\n");	// It is not implemented because it is after return 0.
}

int ret() {
	return 1000;	// This function returns 1000 value.
}

int slave(int master_money) {		// int master_money is the parameter (or argument)  of the function slave
	master_money += 10000;
	return master_money;
}

int change_val(int *pi) {
	printf("----- In change_val function -----\n");
	printf("Value of pi : %p \n", pi);
	printf("Value which is indicated by pi : %d \n", *pi);
	*pi = 3;
	printf("----- Terminate change_val function -----\n");
	return 0;
}

int swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	return 0;
}

int swap_correct(int *a, int *b);	// This is the prototype of function.
// When the function is located after main() function, the prototype of function must be used before main() function.
int add_number(int *parr);
int max_number(int *parr);
int add1_element(int (*arr)[2], int row);
int max(int a, int b);
int donothing(int a, int b);

int main() {
	int a = ret();
	int my_money = 100000;
	int i = 0;
	int j, k;
	j = 3;
	k = 5;

	printf("Return value of ret() function : %d \n", a);
	printf("My money : $%d \n", slave(my_money));

	printf("Let's call the function: ");
	print_hello();

	printf("Do we call it again? ");
	print_hello();
	
	printf("Address of i : %p \n", &i);
	printf("Value of i before calling the change_val function : %d \n", i);
	change_val(&i);
	printf("Value of i after calling the change_val function : %d \n", i);
	printf("Before swap : j : %d, k : %d \n", j, k);
	swap(j, k);
	printf("After swap : j : %d, k : %d \n", j, k);
	printf("Before swap : j : %d, k : %d \n", j, k);
	swap_correct(&j, &k);
	printf("After swap : j : %d, k : %d \n", j, k);
	
	int arr[3];
	for (i = 0; i < 3; i++) {
		printf("Input the value of arr[%d] : ", i); 
		scanf("%d", &arr[i]);
	}

	add_number(arr);

	printf("Each element of array : %d, %d, %d \n", arr[0], arr[1], arr[2]);
	
	int arr1[10];
	for (i = 0; i < 10; i++) {
		printf("Input the value of arr1[%d] : ", i); 
		scanf("%d", &arr1[i]);
	}

	printf("Maximum number of arr1 : %d \n", max_number(arr1));

	int arr2[3][2];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("Input the value of arr2[%d][%d] : ", i, j);
			scanf("%d", &arr2[i][j]);
		}
	}

	add1_element(arr2, 3);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("arr2[%d][%d] : %d \n", i, j, arr2[i][j]);
		}
	}

	// Pointer of function
	int m, n;
	int (*pmax)(int, int);	// pointer of function
	pmax = max;	// pmax indicates the max function

	printf("Enter two numbers : ");
	scanf("%d %d", &m, &n);
	printf("max(a, b) : %d \n", max(m, n));
	printf("pmax(a, b) : %d \n", pmax(m, n));

	pmax = donothing;	// pmax indicates the donothing function
	printf("donothing(1, 1) : %d \n", donothing(1, 1));
	printf("pmax(1, 1) : %d \n", pmax(1, 1));


	return 0;
}

int swap_correct(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}

int add_number(int *parr) {
	int i;
	for (i = 0; i < 3; i++) {
		parr[i]++;
	}
	return 0;
}

int max_number(int *parr) {
	int i;
	int max = parr[0];

	for (i = 1; i < 10; i++) {
		if (parr[i] > max) {
			max = parr[i];
		}
	}
	return max;
}

int add1_element(int (*arr)[2], int row) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < 2; j++) {
			arr[i][j]++;
		}
	}
	return 0;
}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;

	return 0;
}

int donothing(int a, int b) {
	return 1;
}
