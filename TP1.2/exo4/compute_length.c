#include <stdio.h>

int compute_length(char string[]) {
	int length = 0;
	while (string[length] != '\0') {
		length += 1;
	}
	return length;
}
