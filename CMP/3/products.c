#include <stdio.h>

int main(void) {
    int itemNum;
    float price;
    int dd, mm, yyyy;

    printf("Enter item number: ");
    scanf("%d", &itemNum);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &mm, &dd, &yyyy);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-6d\t\t$%7.2f\t%d/%d/%d\n", itemNum, price, mm, dd, yyyy);

    return 0; 
}
