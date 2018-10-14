#include "chaine.h"

int palindrome(char *string) {
	char *P1,*P2; /* pointers */
	int bool = 1; /* 1 if palindrome else 0 */
	
	// P2 goes on the '\0'
	for (P2=string; *P2; P2++);
	// P2 goes on the last letter
	P2--;
	
	/* Put P1 on the first letter and incremente P1 while P2 decrement
	 * The loop continues only if bool = 1 
	 * and all the characters aren't all checked */
	for (P1=string; bool && P1 < P2; P1++, P2--){
        // check if opposite characters are the same
        if (*P1 != *P2) {
			bool=0;
		}
	}
		
	// return result
	if (bool)
		return 1;
	return 0;
}

int compute_length(char string[]) {
	int length = 0;
	while (string[length] != '\0') {
		length += 1;
	}
	return length;
}