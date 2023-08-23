#include <stdio.h>
#include <string.h>

void reverse_name(char *name);


int main(void) {
    char name[30]; 

    printf("Enter a first and last name: ");
    fgets(name, 30, stdin);
    reverse_name(name);
    puts(name);

    return 0;
}


void reverse_name(char *name) {
    char *start = name;
    char initial = *name;

    while (*name++ != ' ')
        ;

    while (*name) {
        if (*name == '\n') {
            name++;
            continue;
        }
        *start++ = *name++;
    }

    *start++ = ',';
    *start++ = ' ';
    *start++ = initial;
    *start++ = '.';
    *start = '\0';
}
