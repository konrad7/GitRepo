#include "add.h"
#include "multiply.h"
#include "pow.h"

void areEquals(double expected, double got) {
	if (expected != got) {
		std::cout << "Expected: " << expected << " but got: " << got << std::endl;
	}
	else {
		std::cout << "Test passed" << std::endl;
	}
}

int main() {
	areEquals(4, add(2, 2));
	areEquals(12, multiply(4, 3));
	areEquals(8, pow(2, 3));
	return 0;
}