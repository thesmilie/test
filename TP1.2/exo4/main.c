#include <stdio.h>
#include "compute_length.h"

int main(void) {
	char string[101]; 
	printf ("Enter a string (with less than 100 characters): ");
	scanf("%s", string);
	printf ("Length: %d\n", compute_length(string));
	return 0;
}
