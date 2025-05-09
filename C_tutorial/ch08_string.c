#include <stdio.h>
int str_length(char *str);
int copy_str(char *dest, char *src);
int stradd(char *dest, char *src);
int compare(char *str1, char *str2);

int main() {
	// The following expressions for NULL are the same as each other.
	char null_1 = '\0';
	char null_2 = 0;
	char null_3 = (char)NULL;
	
	// This is NOT NULL but '0'
	char not_null = '0';
	
	printf("Integer value (ASCII) of NULL : %d, %d, %d \n", null_1, null_2, null_3);
	printf("Integer value (ASCII) of '0' : %d \n", not_null);
	
	// The following expressions are the same as each other. In array, NULL must be included. 
	char sentence_1[4] = {'P', 's', 'i', '\0'};
	char sentence_2[4] = {'P', 's', 'i', 0};
	char sentence_3[4] = {'P', 's', 'i', (char)NULL};
	char sentence_4[4] = {"Psi"};

	printf("sentence_1 : %s \n", sentence_1);
	printf("sentence_2 : %s \n", sentence_2);
	printf("sentence_3 : %s \n", sentence_3);
	printf("sentence_4 : %s \n", sentence_4);

	// Pointer
	char word[] = {"long sentence"};
	char *str = word;	// pointer of character array
	printf("%s \n", str);
	printf("%s \n", word);

	word[0] = 'a';
	word[1] = 'b';
	word[2] = 'c';
	word[3] = 'd';
	printf("%s \n", str);
	printf("%s \n", word);

	// Count the characters from the string
	char str1[] = {"What is your name?"};
	printf("The length of this string : %d \n", str_length(str1));

	// Input the string
	char words[30];		// It can have the maximum 29 characters because of NULL.
	printf("Input the string under 30 characters : ");
	scanf("%s", words);
	printf("String : %s \n", words);

	// char copy
	char str2[] = "Hello";
	char str3[] = "Hi";
	printf("Before copy : %s \n", str2);

	copy_str(str2, str3);

	printf("After copy : %s \n", str2);

	// char add
	char str4[100] = "Hello my name is ";
	char str5[] = "Psi";
	printf("Before stradd : %s \n", str4);

	stradd(str4, str5);
	printf("After stradd : %s \n", str4);

	// char compare
	char str6[20] = "hello every1";
	char str7[20] = "hello everyone";
	char str8[20] = "hello every1 hi";
	char str9[20] = "hello every1";

	if (compare(str6, str7)) {
		printf("%s and %s are the same. \n", str6, str7);
	} else {
		printf("%s and %s are NOT the same. \n", str6, str7);
	}

	if (compare(str6, str8)) {
		printf("%s and %s are the same. \n", str6, str8);
	} else {
		printf("%s and %s are NOT the same. \n", str6, str8);
	}
	
	if (compare(str6, str9)) {
		printf("%s and %s are the same. \n", str6, str9);
	} else {
		printf("%s and %s are NOT the same. \n", str6, str9);
	}

	return 0;
}

int str_length(char *str) {
	int i = 0;
	while (str[i]) {
		i++;
	}
	return i;
}

int copy_str(char *dest, char *src) {
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return 0;
}

int stradd(char *dest, char *src) {
	while (*dest) {
		dest++;
	}

	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
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
