#include <stdio.h>


int power(int x, int n);


int power(int x, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) return power(x, n/2) * power(x, n/2);
    else return x * power(x, n-1);
}

int main(void) {
    int x, n;

    printf("Please provide a value for the base x: ");
    scanf("%d", &x);

    printf("Please provide a value for the exponent n: ");
    scanf("%d", &n);

    int value = power(x, n);
    printf("The computed value is %d\n", value);

    return 0;
}
