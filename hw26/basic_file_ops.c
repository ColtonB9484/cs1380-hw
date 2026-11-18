#include <stdio.h>
#include <stdlib.h>

int main(void) {

	const char *fname = "output.txt";
	FILE *output_file = fopen(fname, "w");

	if(output_file == nullptr) {
		perror("File could not be opened\n");
	} else {
		printf("%s was opened successfully.\n", fname);
		printf("Now writing to %s.\n\n", fname);

		fprintf(output_file, "%s is the name of this file.\n", fname);
		fprintf(output_file, "Jordan Love\n");
		fprintf(output_file, "Mathew Golden\n");
		fprintf(output_file, "Micah Parsons\n");

		fclose(output_file);
	}

	output_file = fopen(fname, "r");
	if(output_file == nullptr) {
		perror("File could not be opened\n");
	} else {
		printf("Reading from %s:\n\n", fname);
		char buffer[256];
		while(fgets(buffer, sizeof(buffer), output_file) != NULL) {
			printf("%s", buffer);
		}

		if (feof(output_file)) {
			printf("\nEnd of %s reached\n", fname);
		}

		fclose(output_file);
	}
	
	

	return EXIT_SUCCESS;
}
