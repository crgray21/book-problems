#include <stdio.h>

#define LEN 50

int main(void) {
    char msg[LEN], i;
    char c;

    printf("Enter a message: ");

    i = 0;
    while((c = getchar()) != '\n' && i < LEN) {
        msg[i++] = c;
    }

    i = i - 1;
    while(i >= 0) {
        printf("%c", msg[i--]);
    }

    printf("\n");

    return 0;
}
