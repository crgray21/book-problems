#include <stdio.h>

int main(void) {
    int i = 2;
    int j = 3;
    j *= i + 4;

    printf("%d", j);

    return 0;
}
