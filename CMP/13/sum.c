#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int atoi2(char *s);

int main(int argc, char* argv[]) {
    int sum = 0; 

    for (int i = 1; i < argc; i++) {
        sum += atoi2(argv[i]);
    }

    printf("%d\n", sum);

    return 0;
}


int atoi2(char * s) {
    int num = 0;

    while (*s) {
        num = num * 10 + (*s - '0');
        s++;
    }

    return num;
}
