#include <stdio.h>

long power(long x, long n);


long power(long x, long n) {
    if (n == 0) {
        return 1;
    } 

    return x * power(x, n-1);
}


int main(void) {
    long poly;
    long x;

    printf("Please enter a base x for a polynomial: ");
    scanf("%ld", &x);

    poly = 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x ,2) + 7 * x - 6;

    printf("%ld\n", poly);

    return 0;
}
