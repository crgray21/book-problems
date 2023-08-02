#include <stdio.h>

int main (void) {
    int i = 5;
    int j = (i -= 2) + 1;

    printf("%d %d\n", i, j);



    i = 7;
    j = 6 + (i = 2.9);
    printf("%d %d\n", i, j);


    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);

    return 0;
}
