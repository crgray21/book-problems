#include <stdio.h>

int main(void) {
    char ch;
    short digit[10] = {0};

    printf("Enter a number: ");

    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            digit[ch - '0']++;
        } else {
            printf("%c is not a digit!\n", ch);
        }
    }

    for (int i = 0; i < 10; ++i) {
        if (digit[i] > 1) printf("%d ", i);
    }

    printf("\n");

    return 0;
}
