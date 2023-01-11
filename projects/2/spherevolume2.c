// Calculates the volume of a sphere with user input

#include <stdio.h>

int main(void) {
    int radius;
    float volume;

    printf("Enter radius of box: ");
    scanf("%d", &radius);
    volume = (4.0f/3.0f) * (3.141518) * (radius * radius * radius); // Pi is an estimate

    printf("Volume = %f", volume);
    
    return 0;
}