// Standard input and output library
#include <stdio.h>
// Standard library for memory management, system functions, etc.
#include <stdlib.h>

int main() {
	int age = 25;
	float pi = 3.1415;
	char letter = 'A';

	// Printing integer, float and character values
	printf("Age: %d\n", age);
	printf("Pi: %.2f\n", pi);
	printf("Letter: %c\n", letter);

	// Printing the ASCII value of the character
	printf("Letter (ASCII): %d\n", letter);

	// Printing multiple values in one statement
	printf("Letter %c, integer %d \n", letter, age);

	// Performing arithmetic operations inside printf
	printf("age: %d, age+10: %d \n", age, age + 10);

	return 0;
}
