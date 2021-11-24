#include "stdio.h"
#include "string.h"

int main() {
	/*
	int false = 0;
	for(int i = 0, j = 10; i < 10 || j > 3; i += 2, j -= 3) {
		printf("%d, %d\n", i, j);
	}
	
	int var = 0;
	while(var < 100) {
	
		// Ensure that you have something like this:
		var += 1;
	}
	
	do {
		printf("DO/WHILE: This should print\n");
	} while(false);
	
	while(false) {
		printf("WHILE: This should print\n");
	}
	*/
	
	char *my_string = "many characters";
	char *my_string_with_null_inside = "many\0characters";

	printf("my_string length: %d\n", strlen(my_string));
	printf("my_string_with_null_inside length: %d\n", strlen(my_string_with_null_inside));
	
	
	printf("my_string address: %u\n", my_string);
	printf("&my_string: %u\n", &my_string);
	
	printf("sizeof char: %u\n", sizeof(char));
	
	if(my_string == &my_string[0]) {
		printf("This is nuts\n");
	}

	for(int i = 0; i <= strlen(my_string); i++) {
		printf("character: %c | %d \t address: %u\n", my_string[i], my_string[i], &my_string[i]);
	}
	
	printf("\n");
	
	// It would seem that the +i coincides with the size of a char (1 byte, 1 incrementation for i)...
	for(int i = 0; i <= strlen(my_string); i++) {
		printf("character: %c | %d \t address: %u\n", *(my_string + i), *(my_string + i), my_string + i);
	}
	
	printf("\n");
	
	// Let's try that dereferencing notation with an int array!
	// We first create the empty int_array of size 10
	int int_array[10];
	
	// We fill the int_array with numbers
	for(int i = 0; i < 10; i++) {
		int_array[i] = i;
	}
	
	// int_array's address
	printf("int_array address: %u\n", &int_array);
	
	// sizeof int_array
	printf("sizeof int: %u\n", sizeof(int));
	
	// Let's print the same information as we did for my_string
	for(int i = 0; i <= 10; i++) {
		printf("number: %d \t address: %u\n", int_array[i], &int_array[i]);
	}
	
	printf("\n");
	
	// It seems that the C language is smart enough to understand that by +1 (when dereferencing),
	// we want to go to the next element, not actual memory address
	
	for(int i = 0; i <= 10; i++) {
		printf("number: %d \t address: %u\n", *(int_array + i), int_array + i);
	}
	
	printf("---------------------------\n");
	
	int a = 42;
	int *p = &a;
	
	printf("&a: %u, a:  %u\n", &a, a);
	printf("p:  %u, *p: %u, &p: %u\n", p, *p, &p); 
	
}
