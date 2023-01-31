// Displays the inputted price with 5% tax added

#include <stdio.h>

int main(void) {
    float TAX_PERCENT = 1.05;
    float price;

    printf("Enter an amount: ");
    scanf("%f", &price);

    printf("With tax added: %.2f", price * TAX_PERCENT);
    return 0;
}