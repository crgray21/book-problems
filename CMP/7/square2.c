#include <stdio.h>

int main(void) {
    long i;
    int n;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in the table: ");
    scanf("%d", &n);
    ch =  getchar();

    for (i = 1; i <= n; i++) {
        if ((i - 1) % 24 == 0 && (i != 1)) {
            do {
                printf("\nPress Enter to continue...");
            } while((ch = getchar()) != '\n');
        }

        printf("%10ld%20ld\n", i, i * i);
    }

    return 0;
}
