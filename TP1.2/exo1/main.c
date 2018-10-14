#include <stdio.h>
#include "compute_pgcd.h"

int main(void) {
    int parameter_a, parameter_b;
    printf("First number: ");
    scanf("%d", &parameter_a);
    printf("Second number: ");
    scanf("%d", &parameter_b);
    printf ("THE PGCD of %d and %d is : %d\n", parameter_a, parameter_b, compute_pgcd(parameter_a,parameter_b));
    return 0;
}
