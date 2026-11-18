#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const char *input_fname = "input.txt";
	const char *output_fname = "copy.txt";

	FILE *input_file = fopen(input_fname, "r");
	FILE *output_file = fopen(output_fname, "w");

	if(input_file == nullptr || output_file == nullptr) {
		perror("One or both files could not be opened\n");
	} else {
		printf("Copying %s into %s. . .\n", input_fname, output_fname);
		
		char buffer[256];
		int count = 0;
		while(fgets(buffer, sizeof(buffer), input_file) != NULL) {
			fprintf(output_file, "%s", buffer);
			count++;
		}

		if (feof(input_file)) {
			printf("Finished copying %d lines into %s\n", count, output_fname);
		}

		fclose(input_file);
		fclose(output_file);
	}	
	

	return EXIT_SUCCESS;
}
