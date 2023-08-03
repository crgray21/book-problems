#include <stdio.h>
#include <ctype.h>

int main(void) {
    _Bool is_morning;
    char ch;
    int hours, mins;

    printf("Please enter a 12-hour time with AM or PM: ");

    scanf(" %d:%d ", &hours, &mins);

    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        if (ch == 'A') { 
            is_morning = 1;
            break;
        } else if (ch == 'P') {
            break;
        }
    }


    if (is_morning) {
        if (hours == 12) hours = hours - 12; 
    } else {
        if (hours != 12) hours = hours + 12;
    }

    printf("Equivalent 24hr time: %02d:%02d\n", hours, mins);

    return 0;

}
