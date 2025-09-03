#include <stdio.h>
	int main (void) {
	int m = 5, n = 10;
	printf ("m > 0 && n > 0 = %d\n", m > 0 && n > 0);
	printf ("m > 0 || n < 0 = %d\n", m > 0 || n < 0);
	printf ("!(m == 5) = %d\n",!(m == 5));
	return 0;
}
