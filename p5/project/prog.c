#include "foo.h"
#include "bar.h"
#include <stdio.h>

int main() {
	int a = 21;
	a = foo(a);
	bar(&a);
	printf("Result: %d\n", a);
	return 0;
}

