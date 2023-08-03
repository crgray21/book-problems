#include <stdio.h>

int main(void) {
    char ch, first_initial;

    printf("Enter a first and last name: ");

    while ((first_initial = getchar()) == ' ');

    while ((ch = getchar()) != ' ');

    while ((ch = getchar()) != '\n') {
        printf("%c", ch);
    }

    printf(", %c.\n", first_initial);

    return 0;

}
