#include <ctype.h>
#include <stdio.h>

#define LEN 50

int main(void) {
    char msg[LEN], c, *p1, *p2;
    int is_palindrome = 1;

    printf("Enter a message: ");

    p1 = msg;
    while((c = getchar()) != '\n' && p1 < msg + LEN) {
        *p1++ = c;
    } 

    p1--;

    for (p2 = p1, p1 = msg; p1 < p2; p1++, p2--) {
        while (*p1 < 'A' || *p1 > 'z') p1++;
        while (*p2 < 'A' || *p2 > 'z') p2--;

        if (p1 >= p2) break;
        if (tolower(*p1) != tolower(*p2)) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0; 
}
