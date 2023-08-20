#include <stdio.h>

#define LEN 50

int main(void) {
    char msg[LEN], c, *p;

    printf("Enter a message: ");

    p = msg;
    while((c = getchar()) != '\n' && p < msg + LEN) {
        *p++ = c;
    }

    p--;
    while(p >= msg) {
        printf("%c", *p--);
    }

    printf("\n");

    return 0;
}
