#include <stdio.h>

// below code works for C99, but not C89. Consider casting to unsigned long if using C89.
int main(void) {
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of short: %zu\n", sizeof(short));
    printf("Size of long: %zu\n", sizeof(long));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of long double: %zu\n", sizeof(long double));

    return 0;
}
