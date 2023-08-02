#include <stdio.h>

int main(void) {
    float loan, rate, payment;

    printf("Enter the amount of the loan: ");
    scanf("%f", &loan);

    printf("Enter the interest rate: ");
    scanf("%f", &rate);

    printf("Enter the monthly payment: ");
    scanf("%f", &payment);

    float monthly_interest_rate = rate * .02 / 12;
    printf("\n");

    loan = (loan - payment) * (1.0 + monthly_interest_rate);
    printf("Balance remaining after the first payment: $%.2f\n", loan);
    
    loan = (loan - payment) * (1.0 + monthly_interest_rate);
    printf("Balance remaining after the second payment: $%.2f\n", loan);

    loan = (loan - payment) * (1.0 + monthly_interest_rate);
    printf("Balance remaining after the third payment: $%.2f\n", loan);

    return 0;
}
