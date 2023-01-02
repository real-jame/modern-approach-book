// Computes the dimensional weight of a 12" x 10" x 8" box

// Include standard I/O library
#include <stdio.h>

int main(void) {
    // Initialize variables with their common type
    int height, length, width, volume, weight;

    // Set variables individually - height, length, and width are hardcoded
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    // Report the results to the user
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    // Cleanly exit
    return 0;
}