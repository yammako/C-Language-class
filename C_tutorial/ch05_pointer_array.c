#include <stdio.h>
int main() {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	for (i = 0; i < 10; i++) {
		printf("Address of arr[%d] : %p \n", i, &arr[i]);	// Address of each element in arr has 4 byte because it is int type.
	}
	int* parr;		// pointer for arr
	parr = &arr[0];
	for (i = 0; i < 10; i++) {
		printf("Address of arr[%d] : %p --- ", i, &arr[i]);
		printf("Value of (parr + %d) : %p ", i, (parr + i));
		if (&arr[i] == (parr + i)) {
			printf(" ---> Match \n");
		} else {
			printf(" ---> Mismatch \n");
		}
	}
	printf("arr[3] = %d --- *(parr + 3) = %d \n", arr[3], *(parr + 3));
	// Size of arr = 4 byte x 10 = 40 byte
	// Size of parr = 64bit = 8 byte
	// sizeof() function returns long unsigned int. Thus, %ld must be used.
	printf("Size of arr : %ld \n", sizeof(arr));		// 40 byte
	printf("Size of parr : %ld \n", sizeof(parr));		// 8 byte
	return 0;
}
