#include <stdio.h>
#include "chaine.h"

int main(void) {
    char string[101];
    printf ("Enter a string (with less than 100 characters): ");
    scanf("%s", string);
    // display result
    if (palindrome(string))
		printf("%s is a palindrome\n", string);
	else
		printf("%s is not a palindrome\n", string);
	return 0;
}
