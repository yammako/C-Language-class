// Pointer of Pointer
#include <stdio.h>
int main() {
	int arr[3] = {1, 2, 3};
	int *parr;
	int arr1[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};
	int *parr1 = arr1;
	int sum = 0;

	parr = arr;	// It is the same as "parr = &arr[0]"
	printf("arr[1] : %d \n", arr[1]);
	printf("parr[1] : %d \n", parr[1]);
	
	while (parr1 - arr1 <= 9) {
		sum += (*parr1);
		parr1++;
	}
	printf("My average score: %d \n", sum / 10);
	
	// Pointer of Pointer ("**")
	int a;
	int *pa;	// pointer
	int **ppa;	// pointer of pointer

	pa = &a;	// pa has the address of a
	ppa = &pa;	// ppa has the address of pa

	a = 3;
	// *pa = **ppa = a
	// pa = *ppa = &a
	// ppa = &pa
	printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
	printf("&a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
	printf("&pa : %p // ppa : %p \n", &pa, ppa);
	
	int arr2[3] = {1, 2, 3};	// arr2 has three different addresses for each element
	int (*parr2)[3] = &arr2;	// pointer of array for the addresses of the array elements. "(*parr)[3]" is used for pointer of array
	printf("arr2[1] : %d \n", arr2[1]);
	printf("parr2[1] : %d \n", (*parr2)[1]);
	printf("address of arr2 : %p \n", arr2);
	printf("address of parr2 : %p \n", parr2);

	int arr2d[2][3] = {{1,2,3}, {4,5,6}};
	printf("arr2d[0] : %p \n", arr2d[0]);
	printf("&arr2d[0][0] : %p \n", &arr2d[0][0]);
	printf("arr2d[1] : %p \n", arr2d[1]);
	printf("&arr2d[1][0] : %p \n", &arr2d[1][0]);
	printf("Total size of arr2d : %ld \n", sizeof(arr2d));		// 4byte x 2 x 3 = 24byte
	printf("Total columns of arr2d : %ld \n", sizeof(arr2d[0]) / sizeof(arr2d[0][0]));	// (4byte x 3) / 4byte = 3
	printf("Total rows of arr2d : %ld \n", sizeof(arr2d) / sizeof(arr2d[0]));	// 24byte / (4byte x 3) = 2

	printf("arr2d : %p, arr2d + 1 : %p \n", arr2d, arr2d + 1);	// since arr2d has 3 columns, arr2d + 1 means that (4byte x 3) is added to the address of arr2d

	// Pointer of array: It indicates the array.
	int (*parr2d)[3];
	parr2d = arr2d;
	printf("parr2d[1][2] : %d, arr2d[1][2] : %d \n", parr2d[1][2], arr2d[1][2]);
	
	// Pointer array: It is array type pointer. 
	int *arr4[3];
	int aa = 1, b = 2, c = 3;
	arr4[0] = &aa;
	arr4[1] = &b;
	arr4[2] = &c;
	printf("aa : %d, *arr4[0] : %d \n", aa, *arr4[0]);
	printf("b : %d, *arr4[1] : %d \n", b, *arr4[1]);
	printf("c : %d, *arr4[2] : %d \n", c, *arr4[2]);
	printf("&aa : %p, arr4[0] : %p \n", &aa, arr4[0]);
	return 0;
}
