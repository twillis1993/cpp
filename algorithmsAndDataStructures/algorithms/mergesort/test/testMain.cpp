#define CATCH_CONFIG_MAIN
#include <stdio.h>
#include "catch.hpp"
#include "mergesort.hpp"

TEST_CASE("Testing singleton array") {	
	int singletonArray[] = {1};
	
	REQUIRE(*mergesort(singletonArray, 1)==1);
}

TEST_CASE("Testing length two array with identical elements") {	
	int lengthTwoArray[] = {1,1};
	
	REQUIRE(*mergesort(lengthTwoArray, 2)==1);
	REQUIRE(*(mergesort(lengthTwoArray, 2)+1)==1);
}

TEST_CASE("Testing length three array with identical elements") {	
	int lengthThreeArray[] = {1,1,1};
	
	REQUIRE(*mergesort(lengthThreeArray, 2)==1);
	REQUIRE(*(mergesort(lengthThreeArray, 2)+1)==1);
	REQUIRE(*(mergesort(lengthThreeArray, 2)+2)==1);
}

TEST_CASE("Testing sorted length two array with distinct elements") {	
	int lengthTwoArray[] = {1,2};
	
	REQUIRE(*mergesort(lengthTwoArray, 2)==1);
	REQUIRE(*(mergesort(lengthTwoArray, 2)+1)==2);
}

TEST_CASE("Testing unsorted length two array with distinct elements") {	
	int lengthTwoArray[] = {2,1};
	
	REQUIRE(*mergesort(lengthTwoArray, 2)==1);
	REQUIRE(*(mergesort(lengthTwoArray, 2)+1)==2);
}

TEST_CASE("Testing unsorted length three array with distinct elements") {	
	int lengthThreeArray[] = {2,1,3};
	
	REQUIRE(*mergesort(lengthThreeArray, 3)==1);
	REQUIRE(*(mergesort(lengthThreeArray, 3)+1)==2);
	REQUIRE(*(mergesort(lengthThreeArray, 3)+2)==3);
}

TEST_CASE("Testing unsorted length four array with distinct elements") {	
	int lengthFourArray[] = {4,2,1,3};
	
	REQUIRE(*mergesort(lengthFourArray, 4)==1);
	REQUIRE(*(mergesort(lengthFourArray, 4)+1)==2);
	REQUIRE(*(mergesort(lengthFourArray, 4)+2)==3);
	REQUIRE(*(mergesort(lengthFourArray, 4)+3)==4);
}

TEST_CASE("Testing unsorted length five array with distinct elements") {	
	int lengthFiveArray[] = {4,5,2,1,3};
	
	REQUIRE(*mergesort(lengthFiveArray, 5)==1);
	REQUIRE(*(mergesort(lengthFiveArray, 5)+1)==2);
	REQUIRE(*(mergesort(lengthFiveArray, 5)+2)==3);
	REQUIRE(*(mergesort(lengthFiveArray, 5)+3)==4);
	REQUIRE(*(mergesort(lengthFiveArray, 5)+4)==5);
}
