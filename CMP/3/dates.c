#include <stdio.h>

int main (void) {
    int mm, dd, yyyy;

    printf("Hi. Please enter a date: ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("You entered the date %d%02d%02d\n", yyyy, mm, dd);

    return 0;
}
