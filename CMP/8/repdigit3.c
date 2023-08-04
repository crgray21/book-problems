#include <stdio.h>

int main(void) {
    int digit_seen[10] = {0};
    int digit;
    long n;

    
    printf("Enter a number (negative to quit): ");
    scanf("%ld", &n);


    while (n > 0) {

        while (n > 0) {
            digit = n % 10;
            digit_seen[digit]++;
            n = n / 10;
        }

        printf("Digit:\t    ");

        for (int i = 0; i < 10; ++i) {
            printf("%3d", i);
        }

        printf("\nOccurrences:");

        for (int i = 0; i < 10; ++i) {
            printf("%3d", digit_seen[i]);
        }

        printf("\n\n");

        printf("Enter a number (negative to quit): ");
        scanf("%ld", &n);
    
    }

    printf("Program exited.\n");

    return 0;
}
