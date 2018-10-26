#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "binarySearch.hpp"

TEST_CASE("Testing singleton array") {
	int singletonArray[] = {1};

	REQUIRE(binarySearch(singletonArray,1,1)==true);
	REQUIRE(binarySearch(singletonArray,1,2)==false);	

	REQUIRE(binarySearchWithIndex(singletonArray,1,1,0)==0);
	REQUIRE(binarySearchWithIndex(singletonArray,1,2,0)==-1);	
}

TEST_CASE("Testing array of even length") {
	
	int evenLengthArray[] = {1,2,3,4};
	
	REQUIRE(binarySearch(evenLengthArray,4,1)==true);
	REQUIRE(binarySearch(evenLengthArray,4,2)==true);	
	REQUIRE(binarySearch(evenLengthArray,4,3)==true);
	REQUIRE(binarySearch(evenLengthArray,4,4)==true);	
	REQUIRE(binarySearch(evenLengthArray,4,5)==false);	

	REQUIRE(binarySearchWithIndex(evenLengthArray,4,1,0)==0);
	REQUIRE(binarySearchWithIndex(evenLengthArray,4,2,0)==1);	
	REQUIRE(binarySearchWithIndex(evenLengthArray,4,3,0)==2);
	REQUIRE(binarySearchWithIndex(evenLengthArray,4,4,0)==3);	
	REQUIRE(binarySearchWithIndex(evenLengthArray,4,5,0)==-1);	
}

TEST_CASE("Testing array of odd length") {

	int oddLengthArray[] = {1,2,3,4,5};

	REQUIRE(binarySearch(oddLengthArray,5,0)==false);		
	REQUIRE(binarySearch(oddLengthArray,5,1)==true);
	REQUIRE(binarySearch(oddLengthArray,5,2)==true);	
	REQUIRE(binarySearch(oddLengthArray,5,3)==true);	
	REQUIRE(binarySearch(oddLengthArray,5,4)==true);
	REQUIRE(binarySearch(oddLengthArray,5,5)==true);

	REQUIRE(binarySearchWithIndex(oddLengthArray,5,0,0)==-1);		
	REQUIRE(binarySearchWithIndex(oddLengthArray,5,1,0)==0);
	REQUIRE(binarySearchWithIndex(oddLengthArray,5,2,0)==1);	
	REQUIRE(binarySearchWithIndex(oddLengthArray,5,3,0)==2);	
	REQUIRE(binarySearchWithIndex(oddLengthArray,5,4,0)==3);
	REQUIRE(binarySearchWithIndex(oddLengthArray,5,5,0)==4);
}
