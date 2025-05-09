#include <stdio.h>
char copy_str(char *dest, const char *src);

struct Books {
	char name[30];
	char auth[30];
	char publ[30];
	int borrowed;
	// int borrowed = 0;	// Initialization cannot be allowed in struct.
};

int main() {
	struct Books Harry_Potter;
	copy_str(Harry_Potter.name, "Harry Potter");
	copy_str(Harry_Potter.auth, "J.K. Rolling");
	copy_str(Harry_Potter.publ, "Scholastic");
	Harry_Potter.borrowed = 0;

	printf("Title of the book: %s \n", Harry_Potter.name);
	printf("Author of the book: %s \n", Harry_Potter.auth);
	printf("Publisher of the book: %s \n", Harry_Potter.publ);

	// Struct type array
	struct Books book_list[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("Input the information of book %d (title, author name, and publisher): ", i);
		scanf("%s%s%s", book_list[i].name, book_list[i].auth, book_list[i].publ);
		book_list[i].borrowed = 0;
	}

	for (i = 0; i < 3; i++) {
		printf("------------------------------------------ \n");
		printf("Information of the book %s \n", book_list[i].name);
		printf("Author: %s \n", book_list[i].auth);
		printf("Publisher: %s \n", book_list[i].publ);

		if (book_list[i].borrowed == 0) {
			printf("You can borrow this book. \n");
		} else {
			printf("It has been already borrowed. \n");
		}
	}

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




