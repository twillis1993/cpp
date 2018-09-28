#include <stdio.h>
#include "Foo.h"

int main(int argc, char** argv) {
	Foo foo = Foo();
	printf("Value of ma: %d\n", foo.getMA());
	foo.printNumber(10);
	foo.printNumber(10.0);
}
