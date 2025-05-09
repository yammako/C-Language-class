#include <stdio.h>
struct TEST {
	int i;
	char c;
};

struct TEST1 {
	int i;
	char str[20];
};

char copy_str(char *dest, const char *src);

int main() {
	struct TEST st, st2;
	struct TEST1 a, b;

	st.i = 1;
	st.c = 'c';

	st2 = st;		// struct assignment. Members of st is copyed to st2.

	b.i = 3;
	copy_str(b.str, "Hello, World!");
	a = b;			// struct assignment.

	printf("st2.i: %d \n", st2.i);
	printf("st2.c: %c \n", st2.c);

	printf("a.str: %s \n", a.str);
	printf("a.i: %d \n", a.i);

	return 0;
}

char copy_str(char *dest, const char *src) {
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return 1;
}
