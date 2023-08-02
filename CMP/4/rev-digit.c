#include <stdio.h>

int main (void) {
    int num;

    printf("Please enter a 2 digit number: ");
    scanf("%d", &num);

    int newNum = num % 10 * 10 + num / 10;
    printf("%d\n", newNum);

    return 0;
}
