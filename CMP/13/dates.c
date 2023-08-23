#include <stdio.h>
#include <string.h>


int main(void) {
    int m, d, y;
    char* months[] = {0, "January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November",
                         "December"};

    printf("Please enter a date in the format mm/dd/yyyy: ");
    scanf("%02d/%02d/%04d", &m, &d, &y);

    printf("You entered the date %s %d, %d\n", months[m], d, y);

    return 0;
}
