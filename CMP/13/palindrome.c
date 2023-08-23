#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

#define LEN 50

bool is_palindrome(const char *msg);

int main(void) {
    char msg[LEN];
    bool palindrome;

    printf("Enter a message: ");
    fgets(msg, LEN, stdin);

    if (is_palindrome(msg))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0; 
}


bool is_palindrome(const char *msg) {
    if (!(*msg)) return true;

    const char *c1 = msg;
    const char *c2 = msg;

    while(*(c2 + 1) != '\n') {
        c2++;
    }
    
    while(c1 < c2) {
        if (tolower(*c1) != tolower(*c2))
            return false;
        c1++;
        c2--;
    }
        
    return true;
}
