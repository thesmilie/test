#include <stdio.h>
#include "palindrome.h"


int main(int argc, char *argv[]) {

    // display result
    if (palindrome(argv[1]))
		printf("%s is a palindrome\n", argv[1]);
	else
		printf("%s is not a palindrome\n", argv[1]);
	
	return 0;
}
