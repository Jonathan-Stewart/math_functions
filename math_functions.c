#include <stdio.h>

int add(x,y) {
	return x+y;
}

int subtract(x,y) {
	return x-y;
}

int multiply(x,y) {
	return x*y;
}

int divide(x,y) {
	return x/y;
}

int main() {
	int i = add(1,2);
	int j = subtract(5,2);
	int k = multiply(7,2);
	int l = divide(9,3);
	printf("%i\n", i);
	printf("%i\n", j);
	printf("%i\n", k);
}
