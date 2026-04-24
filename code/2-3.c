#include <stdio.h>
#include <string.h>


int main() {
	char* p = "hello";
	char arr[] = "hello";

	printf("%zu %zu\n", sizeof(p), strlen(p)); //포인터의 크기 ==> 8
	printf("%zu %zu\n", sizeof(arr), strlen(arr)); //배열의 크기 ==> 6(널문자)

	return 0;
}
