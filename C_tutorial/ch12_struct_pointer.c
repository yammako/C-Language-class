#include <stdio.h>
struct test {
	int a, b;
};

struct TEST {
	int c;
};

int add_one(int *a);

int main() {
	struct test st;
	struct test *ptr;	// Pointer
	ptr = &st;
	
	struct TEST t;
	struct TEST *pt = &t;	// pt is the pointer of t

	(*ptr).a = 1;
	//*ptr.a = 1;	// ERROR ("." has higher priority than "*")
	(*ptr).b = 2;

	pt->c = 0;		// '->' is pointer operator. pt indicates t and then t.c = 0
	add_one(&t.c);

	printf("Member a in st: %d \n", st.a);
	printf("Member b in st: %d \n", st.b);

	printf("t.c: %d \n", t.c);
	return 0;
}

int add_one(int *a) {
	*a += 1;
	return 0;
}
