/*
Name: Mbugua Ankal
Reg.no:CT100/G/26168/25
Description: convert to Celsius 
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    float c = convertToCelsius(f);
    printf("Temperature in Celsius = %.2f°C\n", c);

    return 0;
}
