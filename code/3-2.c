#include <stdio.h>
#include <string.h>


// argc = argument count, argv = argument variable
// argv[0] = 실행경로
int main(int argc, char *argv[]) {

    char* temp;
    for (int i = 1; i < argc -1 ; i++) {
        for (int j = 1; j < argc - i; j++) {
            if (strcmp(argv[j], argv[j + 1]) > 0) {
                temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
        }
    }

	for (int i = 1; i < argc; i++) {
		printf("%s\n", argv[i]);
	}

	return 0;
}
