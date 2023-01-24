// Asks the user to enter a U.S. dollar amount
// and then shows how to pay that amount using
// the smallest number of $20, $10, $5, and $1 bills

#include <stdio.h>

int main(void)
{
    int amount, twenty, ten, five;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenty = amount / 20;
    amount -= twenty * 20;
    ten = amount / 10;
    amount -= ten * 10;
    five = amount / 5;
    amount -= five * 5;

    printf("\n$20 bills: %d", twenty);
    printf("\n$10 bills: %d", ten);
    printf("\n$5 bills: %d", five);
    printf("\n$1 bills: %d", amount);
    return 0;
}