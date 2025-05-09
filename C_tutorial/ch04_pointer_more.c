#include <stdio.h>
int main() {
	int a;
	int b;
	const int* pa = &a;		// pointer pa cannot change the value of "a" because it is constant pointer.
	a = 3;			// It is OK because "a" is not constant.
	// *pa = 3;		// It is not correct. ERROR
	pa = &b;		// It is correct.
	b = 10;
	printf("a : %d \n", a);
	printf("b : %d \n", b);
	printf("pa : %d \n", *pa);
	// Addition for pointer
	printf("pa : %p \n", pa);
	printf("(pa + 1) : %p \n", pa + 1);		// 4 byte addition because this pointer is "int"
	int num;
	char ch;
	double db;
	int* pnum = &num;
	char* pch = &ch;
	double* pdb = &db;
	printf("Value of pnum : %p \n", pnum);
	printf("Value of (pnum + 1) : %p \n", pnum + 1);	// 4 byte addition (int)
	printf("Value of pch : %p \n", pch);
	printf("Value of (pch + 1) : %p \n", pch + 1);		// 1 byte addition (char)
	printf("Value of pdb : %p \n", pdb);
	printf("Value of (pdb + 1) : %p \n", pdb + 1);		// 8 byte addition (double)
	// It does not allow the addition between pointers. ex) pc = pa + pb;
	int c;
	int* pc = &c;
	int* pd;
	*pc = 3;
	pd = pc;	// pointer assignment
	printf("Value of the position indicated by pointer pc: %d \n", *pc);
	printf("Value of the position indicated by pointer pd: %d \n", *pd);
	return 0;
}
