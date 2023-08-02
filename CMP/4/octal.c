#include <stdio.h>

int main (void) {
    int i;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);

    int exp = 1;
    int oct = i % 8;
    i = i / 8;

    for (int j = 1; i > 0; ++j) {
        exp = exp * 10;
        oct += i % 8 * exp; 
        i = i / 8;
    }

    printf("In octal, your number is: %05d\n", oct);

    return 0;
}
