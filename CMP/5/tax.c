#include <stdio.h>


double income_tax(double income);


double income_tax(double income) {
    double tax;

    if (income <  750)
        tax = income * .01;
    else if (income <= 2250)
        tax = 7.50 + (income - 750) * .02;
    else if (income <= 3750)
        tax = 37.50 + (income - 2250) * .03;
    else if (income <= 5250)
        tax = 82.50 + (income - 3750) * .04;
    else if (income <= 7000)
        tax = 142.50 + (income - 5250) * .05;
    else
        tax = 230.00 + (income - 7000) * .06;

    return tax;
}


int main(void) {
    double income;
    double tax;

    printf("Please enter your taxable income: $");
    scanf("%lf", &income);

    tax = income_tax(income);
    printf("Income: %f\n Tax Due: %f\n", income, tax);

    return 0;
}
