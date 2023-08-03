#include <stdio.h>

int main(void) {
    float f1, f2;
    char ch;

    printf("Enter an expression to evaluate (no precedence): ");
    
    scanf("%f", &f1);

    do {
        scanf("%c", &ch);
        if (ch == '\n') break;

        scanf("%f", &f2);
        printf("f1: %f\tch: %c\tf2: %f\n", f1, ch, f2);
        if (ch == '+') {
            f1 += f2;
        } else if (ch == '-') {
            f1 -= f2;
        } else if (ch == '*') {
            f1 *= f2;
        } else if (ch == '/') {
            f1 /= f2;
        }


    } while (1);

    printf("Result of the evaluation: %f\n", f1);

    return 0;
}
