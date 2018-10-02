#include <stdio.h>
#include <stdlib.h>

bool binarySearch(int* array, int arrayLength, int value) {		
	if(value == *(array+((arrayLength-1)/2)))
		return true;	
	else if(arrayLength == 0)
		return false;
	else if(value < *(array+((arrayLength-1)/2)))
		return binarySearch(array, (arrayLength-1)/2,value);
	else 
		return binarySearch((array+((arrayLength-1)/2))+1,arrayLength-((arrayLength-1)/2)+1,value);
}

int binarySearchWithIndex(int* array, int arrayLength, int value, int index) {	
	if(value == *(array+((arrayLength-1)/2)))
		return index+((arrayLength-1)/2);	
	else if(arrayLength == 0)
		return -1;
	else if(value < *(array+((arrayLength-1)/2)))
		return binarySearchWithIndex(array,(arrayLength-1)/2,value,index);
	else 
		return binarySearchWithIndex((array+((arrayLength-1)/2))+1,arrayLength-((arrayLength-1)/2)+1,value,index+((arrayLength-1)/2)+1);
}

/*
int main(int argc, char** argv) {
	int singletonArray[] = {1};

	assert(binarySearch(singletonArray,1,1)==true);
	assert(binarySearch(singletonArray,1,2)==false);	

	assert(binarySearchWithIndex(singletonArray,1,1,0)==0);
	assert(binarySearchWithIndex(singletonArray,1,2,0)==-1);	
	
	int evenLengthArray[] = {1,2,3,4};
	
	assert(binarySearch(evenLengthArray,4,1)==true);
	assert(binarySearch(evenLengthArray,4,2)==true);	
	assert(binarySearch(evenLengthArray,4,3)==true);
	assert(binarySearch(evenLengthArray,4,4)==true);	
	assert(binarySearch(evenLengthArray,4,5)==false);	

	assert(binarySearchWithIndex(evenLengthArray,4,1,0)==0);
	assert(binarySearchWithIndex(evenLengthArray,4,2,0)==1);	
	assert(binarySearchWithIndex(evenLengthArray,4,3,0)==2);
	assert(binarySearchWithIndex(evenLengthArray,4,4,0)==3);	
	assert(binarySearchWithIndex(evenLengthArray,4,5,0)==-1);	

	int oddLengthArray[] = {1,2,3,4,5};

	assert(binarySearch(oddLengthArray,5,0)==false);		
	assert(binarySearch(oddLengthArray,5,1)==true);
	assert(binarySearch(oddLengthArray,5,2)==true);	
	assert(binarySearch(oddLengthArray,5,3)==true);	
	assert(binarySearch(oddLengthArray,5,4)==true);
	assert(binarySearch(oddLengthArray,5,5)==true);

	assert(binarySearchWithIndex(oddLengthArray,5,0,0)==-1);		
	assert(binarySearchWithIndex(oddLengthArray,5,1,0)==0);
	assert(binarySearchWithIndex(oddLengthArray,5,2,0)==1);	
	assert(binarySearchWithIndex(oddLengthArray,5,3,0)==2);	
	assert(binarySearchWithIndex(oddLengthArray,5,4,0)==3);
	assert(binarySearchWithIndex(oddLengthArray,5,5,0)==4);
	
	printf("All tests passed\n");
	
	return 0;
}
*/
