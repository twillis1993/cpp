#include <stdio.h>

int main(int argc, char** argv) {

	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(short));

	int* intArray = new int[100];

	short* shortArray = new short[100];

	printf("Int 0 address: %p\n", intArray);	
	printf("Int 1 address: %p\n", intArray+1);

	printf("Short 0 address: %p\n", shortArray);	
	printf("Short 1 address: %p\n", shortArray+1);

	delete intArray;
	delete shortArray;
}
