#include <stdio.h>

int main(void) {
    char ch, first_initial;
    char ln[20];
    int j = 0;

    printf("Enter a first and last name: ");

    while ((first_initial = getchar()) == ' ');

    while ((ch = getchar()) != ' ');

    for (int i = 0; (ch = getchar()) != '\n'; ++i) {
        ln[i] = ch;
        j++;
    }

    printf("You entered the name: ");
    for (int i = 0; i < j; ++i) printf("%c", ln[i]);
    printf(", %c.\n", first_initial);

    return 0;

}
