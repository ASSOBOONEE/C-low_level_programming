#include <stdio.h>
	int main (void){
	int a = 6, b = 2, c = 3;
	printf ("(a + b) * c = %d\n", (a + b) * c);
	printf ("(a > b) && (b < c) = %d\n", (a > b) && (b < c));
	printf ("(a++ + --b) > c = %d\n", (a++ + --b) > c);
		return 0;
}
