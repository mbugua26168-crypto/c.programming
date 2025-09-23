/*
Name: Mbugua Anka
Reg:CT100/G/26168/25
Deep:C program to compute volume and surface area
volume=π×r^2×h
Surface area=2π×r^2×h +2π×r×h
*/

#include<stdio.h>

int main () {
    float radius, pi, height , volume, surfacearea;

    printf("Enter your radius:");
    scanf ("%f", &radius);

    printf ("Enter your pi:");
    scanf ("%f",&pi);

    printf("Enter your height:");
    scanf("%f",&height);
    
    volume = pi *radius *height;
  surfacearea =(2 * pi *radius *height ) +( 2 * pi * radius *height);

    printf ("\n the volume is %f", volume);
    printf ("\the surface area is %f", surfacearea);

    return 0;
}

    