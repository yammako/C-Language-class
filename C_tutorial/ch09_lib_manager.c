#include <stdio.h>

int add_book(char (*book_name)[30], char (*auth_name)[30],
			 char (*publ_name)[30], int *borrowed, int *num_total_book);
int search_book(char (*book_name)[30], char (*auth_name)[30],
				char (*publ_name)[30], int num_total_book);

int compare(char *str1, char *str2);
int borrow_book(int *borrowed);
int return_book(int *borrowed);

int main() {
	int user_choice;		// Menu selected by user
	int num_total_book = 0;

	// 100 books are in library
	char book_name[100][30], auth_name[100][30], publ_name[100][30];
	// Status of borrow for each book
	int borrowed[100];

	while (1) {
		printf("Library Management Program \n");
		printf("Please select the menu. \n");
		printf("1. Append new book \n");
		printf("2. Search the book \n");
		printf("3. Borrow the book \n");
		printf("4. Return the book \n");
		printf("5. Quit the program \n");

		printf("Your choice: ");
		scanf("%d", &user_choice);

		if (user_choice == 1) {
			add_book(book_name, auth_name, publ_name, borrowed, &num_total_book);
		} else if (user_choice == 2) {
			search_book(book_name, auth_name, publ_name, num_total_book);
		} else if (user_choice == 3) {
			borrow_book(borrowed);
		} else if (user_choice == 4) {
			return_book(borrowed);
		} else if (user_choice == 5) {
			break;
		}
	}

	return 0;
}

int add_book(char (*book_name)[30], char (*auth_name)[30],
			 char (*publ_name)[30], int *borrowed, int *num_total_book) {
	printf("Title of the appended book: ");
	scanf("%s", book_name[*num_total_book]);
	
	printf("Author name of the appended book: ");
	scanf("%s", auth_name[*num_total_book]);
	
	printf("Publisher name of the appended book: ");
	scanf("%s", publ_name[*num_total_book]);

	borrowed[*num_total_book] = 0;	// NOT borrowed.
	printf("Complete appending the book! \n");
	(*num_total_book)++;
	return 0;
}

int search_book(char (*book_name)[30], char (*auth_name)[30],
				char (*publ_name)[30], int num_total_book) {
	int user_input;
	int i;
	char user_search[30];

	printf("Choose the search option \n");
	printf("1. Title \n");
	printf("2. Author name \n");
	printf("3. Publisher \n");
	printf("Your choice : ");
	scanf("%d", &user_input);

	printf("Enter the keywords for searching: ");
	scanf("%s", user_search);

	printf("Searching Results \n");

	if (user_input == 1) {
		for (i = 0; i < num_total_book; i++) {
			if (compare(book_name[i], user_search)) {
				printf("No.: %d // Title: %s // Author: %s // Publisher: %s \n", i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	} else if (user_input == 2) {
		for (i = 0; i < num_total_book; i++) {
			if (compare(auth_name[i], user_search)) {
				printf("No.: %d // Title: %s // Author: %s // Publisher: %s \n", i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	} else if (user_input == 3) {
		for (i = 0; i < num_total_book; i++) {
			if (compare(publ_name[i], user_search)) {
				printf("No.: %d // Title: %s // Author: %s // Publisher: %s \n", i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	return 0;
}
	




int compare(char *str1, char *str2) {
	while (*str1) {
		if (*str1 != *str2) {
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str2 == '\0') return 1;

	return 0;
}

int borrow_book(int *borrowed) {
	int book_num;
	printf("Please enter the number of the borrowed book \n");
	printf("No.: ");
	scanf("%d", &book_num);

	if (borrowed[book_num] == 1) {
		printf("It is already borrowed! \n");
	} else {
		printf("You borrowed this book successfully! \n");
		borrowed[book_num] = 1;
	}
	return 0;
}

int return_book(int *borrowed) {
	int num_book;
	printf("Please enter the number of the returned book \n");
	printf("No.: ");
	scanf("%d", &num_book);

	if (borrowed[num_book] == 0) {
		printf("It is already returned! \n");
	} else {
		borrowed[num_book] = 0;
		printf("You returned this book successfully! \n");
	}
	return 0;
}

