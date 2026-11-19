#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int id;
	float score;
} Student;

int main(void) {
	size_t array_count = 5; //arbitrary number
	Student student_array[] = {
		{1, 88.5},
		{2, 90.5},
		{3, 98.67},
		{4, 83.88},
		{5, 74.92}
	};
	
	const char *output_fname = "binary_output.bin";
	
	FILE *output_file = fopen(output_fname, "wb");

	if(output_file == NULL) {
		perror("Could not open file");
	} else {
		size_t elements_written = fwrite(student_array, sizeof(Student), array_count, output_file);

		if(elements_written != array_count) {
			perror("Error writing to file");
		}
		
		fclose(output_file);
	}

	FILE *input_file = fopen(output_fname, "rb");
	
	if(input_file == NULL) {
		perror("Could not open file");
	} else {
		Student student_read[array_count];
		size_t elements_read = fread(student_read, sizeof(Student), array_count, input_file);
		
		if(elements_read != array_count) {
			perror("Erorr reading from file");
			fclose(input_file);
		} else {
			for(size_t i = 0; i < elements_read; i++) {
				printf("ID: %d, Score: %.2f\n", student_read[i].id, student_read[i].score);
			}
		}

		fclose(input_file);

	}
	
	
	

	return EXIT_SUCCESS;
}
