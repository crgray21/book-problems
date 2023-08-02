#include <stdio.h>

int main(void) {
    int areaCode, n1, n2;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("( %d ) %d - %d", &areaCode, &n1, &n2);

    printf("You entered %03d.%03d.%04d\n", areaCode, n1, n2);

    return 0;
    
}
