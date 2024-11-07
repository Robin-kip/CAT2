#include <stdio.h>

int main() {
    float hours, hourlyWage, grossPay, tax, netPay;

    // Get user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

    // Calculate gross pay
    if (hours > 40) {
        // Calculate regular and overtime pay
        grossPay = (40 * hourlyWage) + ((hours - 40) * hourlyWage * 1.5);
    } else {
        grossPay = hours * hourlyWage;
    }

    // Calculate tax
    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - tax;

    // Display results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}