#include <stdio.h>

int main(void) {
    float money;

    printf("Enter a dollar amount ($X.YY): $");
    scanf("%f", &money);

    printf("Amount with 5%% tax added: %.2f\n", money * 1.05);

    return 0;
}
