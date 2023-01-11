// Computes the dimensional weight of any box given user input for size

// Include standard I/O library
#include <stdio.h>

int main(void) {
    // Initialize variables with their common type
    int height, length, width, volume, weight;

    // Define variables individually
    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);

    // Calculate dimensional weight
    volume = height * length * width;
    weight = (volume + 165) / 166;

    // Report the results to the user
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    // Cleanly exit
    return 0;
}