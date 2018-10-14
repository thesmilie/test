#include "compute_pgcd.h"

int compute_pgcd(int parameter_a, int parameter_b) {
    int pgcd;
    if (parameter_a > parameter_b)
        pgcd = parameter_b;
    else
        pgcd = parameter_a;
    while (pgcd >= 0) {
        if (parameter_a % pgcd == 0 && parameter_b % pgcd == 0) {
            return pgcd;
        }
        pgcd -= 1;
    }
    return pgcd;
}
