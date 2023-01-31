// Calculates the remaining balance on a loan
// after the first, second, and third monthly payments

#include <stdio.h>

int main(void) {
    float loan, interest, payment, monthlyRate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("\nEnter interest rate: ");
    scanf("%f", &interest);
    printf("\nEnter monthly payment: ");
    scanf("%f", &payment);

    monthlyRate = ((interest / 100) / 12) + 1;

    loan *= monthlyRate;
    loan -= payment;
    printf("\nBalance remaining after first payment: %.2f", loan);

    loan *= monthlyRate;
    loan -= payment;
    printf("\nBalance remaining after second payment: %.2f", loan);

    loan *= monthlyRate;
    loan -= payment;
    printf("\nBalance remaining after third payment: %.2f", loan);
}