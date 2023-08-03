#include <stdio.h>
#include <ctype.h>

// The book has not introduced arrays or data structures such as hash maps or dictionaries yet,
// so we will not be using anything to map characters to another integer. I figured a chained
// else if block would be better than a switch in this case.

int main(void) {
    char ch;

    printf("Enter a phone numbers with numbers and or letters: "); 
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);

        if (ch < 'A') {
            printf("%c", ch);
        } else if (ch == 'A' || ch == 'B' || ch == 'C') {
            printf("2");
        } else if (ch == 'D' || ch == 'E' || ch == 'F') {
            printf("3");
        } else if (ch == 'G' || ch == 'H' || ch == 'I') {
            printf("4");
        } else if (ch == 'J' || ch == 'K' || ch == 'L') {
            printf("5");
        } else if (ch == 'M' || ch == 'N' || ch == 'O') {
            printf("6");
        } else if (ch == 'P' || ch == 'R' || ch == 'S') {
            printf("7");
        } else if (ch == 'T' || ch == 'U' || ch == 'V') {
            printf("8");
        } else if (ch == 'W' || ch == 'Y' || ch == 'Z') {
            printf("9");
        }

    }

    printf("\n");

    return 0;
    
}
