#include <stdio.h>

struct Customer {
    int id;
    char name[50];
    float units;
    float rate;
};

// this function calculates and shows the bill
void calculateBill(struct Customer c) {
    float bill;
    bill = c.units * c.rate;
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", c.id);
    printf("Customer Name: %s\n", c.name);
    printf("Units Consumed: %.2f\n", c.units);
    printf("Per Unit Rate: %.2f\n", c.rate);
    printf("Total Bill: %.2f\n", bill);
}

int main() {
    struct Customer c1;

    printf("Enter customer ID: ");
    scanf("%d", &c1.id);
    printf("Enter customer name: ");
    scanf(" %[^\n]", c1.name);
    printf("Enter units consumed: ");
    scanf("%f", &c1.units);
    printf("Enter per unit rate: ");
    scanf("%f", &c1.rate);

    calculateBill(c1);

    return 0;
}
