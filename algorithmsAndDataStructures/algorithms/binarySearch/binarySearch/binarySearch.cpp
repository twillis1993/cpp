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
