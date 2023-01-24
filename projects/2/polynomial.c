// Multiplies the input by the polynomial:
// 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter a value: ");
    scanf("%f", &x);

    float result;
    result = (x * x * x * x * x) * 3;
    result += (x * x * x * x) * 2;
    result -= (x * x * x) * 5;
    result -= (x * x);
    result += x * 7;
    result -= 6;

    printf("Result: %f", result);
    return 0;
}