#include <stdio.h>

int main(int argc, char** argv) {
	int* myIntPointer;
	int** myIntPointerPointer;

	printf("Uninitialised value of the pointer: %p\n", myIntPointer);

	int myInt = 1000;

	myIntPointer = &myInt;
	myIntPointerPointer = &myIntPointer;
	
	printf("Value of myInt: %d\n", myInt);
	printf("Initialised value of the pointer: %p\n", myIntPointer);
	printf("Initialised value of the pointer pointer: %p\n", myIntPointerPointer);	
	printf("Dereferenced value of the pointer pointer: %p\n", *myIntPointerPointer);	
	printf("Address of the pointer: %p\n", &myIntPointer);
	printf("Value of dereferenced pointer: %d\n", *myIntPointer);

	myInt = 200;	

	printf("Value of myInt: %d\n", myInt);
	printf("Initialised value of the pointer: %p\n", myIntPointer);
	printf("Value of dereferenced pointer: %d\n", *myIntPointer);
}
