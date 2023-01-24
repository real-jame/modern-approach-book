// Multiplies the input by the polynomial:
// ((((3x + 2)x - 5)x - 1)x + 7)x - 6
// This is shorter and uses Horner's rule

#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter a value: ");
    scanf("%f", &x);

    float result;
    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Result: %f", result);
    return 0;
}