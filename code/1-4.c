#include <stdio.h>


int my_strcmp(const char* a, const char* b) {
	while (*a != '\0' && *a == *b) {
		a++;
		b++;
	}

	return *a - *b;
}

int main() {
	char str1[20] = "Hello";
	char str2[] = "World";
	
	printf("%d\n", my_strcmp("abc", "abcd"));
	printf("%d\n", my_strcmp("abc", "abc"));
	printf("%d\n", my_strcmp("b", "a"));

	return 0;
}
