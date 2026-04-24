#include <stdio.h>


char* my_strcat(char* dst, const char* src) {
	char* pd = dst;

	while (*pd != '\0') {
		pd++;
	}
	while (*src != '\0') {
		*pd = *src; 
		src++;
		pd++;
	}

	*pd = '\0';

	return dst;
}

int main() {
	char str1[20] = "Hello";
	char str2[] = "World";
	
	printf("%s\n", str1);
	my_strcat(str1, str2);
	printf("%s\n", str1);

	return 0;
}
