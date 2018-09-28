#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <catch.hpp>

bool binarySearch(int* array, int arrayLength, int value) {		
	if(value == *(array+((arrayLength-1)/2)))
		return true;	
	else if(arrayLength == 0)
		return false;
	else if(value < *(array+((arrayLength-1)/2)))
		return binarySearch(array+((arrayLength-1)/2)-1,(arrayLength-1)/2,value);
	else 
		return binarySearch((array+((arrayLength-1)/2))+1,arrayLength-((arrayLength-1)/2)+1,value);
}

int main(int argc, char** argv) {
	int singletonArray[] = {1};

	assert(binarySearch(singletonArray,1,1)==true);
	assert(binarySearch(singletonArray,1,2)==false);	

	int evenLengthArray[] = {1,2,3,4};
	
	assert(binarySearch(evenLengthArray,4,1)==true);
	assert(binarySearch(evenLengthArray,4,2)==true);	
	assert(binarySearch(evenLengthArray,4,3)==true);
	assert(binarySearch(evenLengthArray,4,4)==true);	
	assert(binarySearch(evenLengthArray,4,5)==false);	

	int oddLengthArray[] = {1,2,3,4,5};

	assert(binarySearch(oddLengthArray,5,0)==false);		
	assert(binarySearch(oddLengthArray,5,1)==true);
	assert(binarySearch(oddLengthArray,5,2)==true);	
	assert(binarySearch(oddLengthArray,5,3)==true);	
	assert(binarySearch(oddLengthArray,5,4)==true);
	assert(binarySearch(oddLengthArray,5,5)==true);
}

