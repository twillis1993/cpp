#include <stdio.h>
#include <stdlib.h>
#include <mergesort.hpp>

/*
arrayLength == 4,
then (array, arrayLength/2),  (array+arrayLength/2, (arrayLength+1)/2)
	
arrayLength == 5 
then (array, arrayLength/2), (array+arrayLength/2, (arrayLength+1)/2)

*/

int* mergesort(int* array, int arrayLength) {
	if(arrayLength == 1) {
		return array;
	} else {
		return merge(mergesort(array, arrayLength/2), arrayLength/2, mergesort(array+(arrayLength/2), (arrayLength+1)/2), (arrayLength+1)/2);
	}
}

int* merge(int* arrayA, int aLength, int* arrayB, int bLength) {
	// Not the most space-efficient, but we can allocate and free the copies within the scope of the function
	int* aCopy = (int*) malloc(aLength);

	for(int i = 0; i < aLength; i++) {
		*(aCopy+i) = *(arrayA+i);	
	}

	int* bCopy = (int*) malloc(bLength);

	for(int i = 0; i < bLength; i++) {
		*(bCopy+i) = *(arrayB+i);	
	}

	int i = 0;
	int j = 0;
	
	while(i < aLength && j < bLength) {
		if(*(aCopy+i) > *(bCopy+j)) {
			*(arrayA+i+j) = *(bCopy+j);
			j++;
		} else if (*(aCopy+i) < *(bCopy+j)) {
			*(arrayA+i+j) = *(aCopy+i);
			i++;
		} else {
			*(arrayA+i+j) = *(aCopy+i);
			*(arrayA+i+j+1) = *(bCopy+j);
			i++;	
			j++;
		}
	}

	if(i < aLength) {
		for(int k = i; k < aLength; k++) {
			*(arrayA+k+j) = *(aCopy+k);
		}
	} else if (j < bLength) {
		for(int k = j; k < bLength; k++) {
			*(arrayA+i+k) = *(bCopy+k);
		}
	}	

	free(aCopy);
	free(bCopy);

	return arrayA;
}
