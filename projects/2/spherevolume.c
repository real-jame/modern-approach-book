// Calculates the volume of a sphere

#include <stdio.h>

int main(void) {
    int radius;
    float volume;

    radius = 10;
    volume = (4.0f/3.0f) * (3.14151) * (radius * radius * radius); // Pi is an estimate

    printf("Volume = %f", volume);
    
    return 0;
}