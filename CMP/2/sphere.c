#include <stdio.h>
#include <math.h>

int main(void) {
    float r;

    printf("What is the radius of the sphere (cm)? ");
    scanf("%f", &r); 

    float volume = 4.0f / 3.0f * M_PI * r * r * r;
    printf("%.3f cm^3\n", volume);

    return 0;
}
