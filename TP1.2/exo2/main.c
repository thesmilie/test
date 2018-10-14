#include <stdio.h>

int main(void) {
    int parameter_n, variable_a = 1, result = 0;
    printf("Enter n: ");
    scanf("%d", &parameter_n);
    
    while (variable_a <= parameter_n) {
      result += variable_a;
      variable_a += 2;
    }
    printf ("result: %d\n", result);
    return 0;
}
