#include <stdio.h>

int main(int argc, char *argv[]){

	FILE *file = fopen (argv[1], "r");

	int length = sizeof(file);
	char mas[length];

	if (file == NULL){
		printf("File opening error\n");
	}

	while (fgets(mas, length, file) != NULL){
		printf("%s", mas);
	}

	fclose(file);

	return 0;
}