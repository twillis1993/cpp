#define CATCH_CONFIG_MAIN
#include <stdio.h>
#include "catch.hpp"
#include "quicksort.hpp"

TEST_CASE("Testing singleton array") {	
	int singletonArray[] = {1};
	
	REQUIRE(*quicksort(singletonArray, 1)==1);
}
