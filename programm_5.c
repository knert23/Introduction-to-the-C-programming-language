#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *file = fopen(argv[1], "r");
	if (file == NULL){
		printf("File don't exist\n");
	}

	//Find string lenght and number of string
	
	int countString = 0;
	int lenghtString = 0;
	while (!feof(file)){
		if (fgetc(file) == '\n'){
			countString++;
		}
		else{
			lenghtString++;
		}
	}
	
	// Write the file to an array

	int j = 0;
	char textOriginal[countString][lenghtString];
	fseek(file, 0, SEEK_SET);
	while(!feof(file)){
		fgets(textOriginal[j], lenghtString - 1, file);
		j++;
	}

	fclose(file);

	file = fopen(argv[1], "w");

	printf("Input something\n");
	char textNew[256];
	fgets(textNew, 256, stdin);
	fputs(textNew, file);

	// Write the user input and the source file

	for (int i = 0; i < countString; i++){
		fputs(textOriginal[i], file);
	}

	fclose(file);

	return 0;
}
