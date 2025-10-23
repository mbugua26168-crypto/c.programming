/*
Name: Mbugua Ankal
Reg.no:CT100/G/26168/25
Description:calculateFare
*/
#include <stdio.h>

float calculateFare(int kilometers) {
    return kilometers * 50.0;
}

int main() {
    int distance;
    printf("Enter distance in kilometers: ");
    scanf("%d", &distance);

    float fare = calculateFare(distance);
    printf("Total fare = KSh. %.2f\n", fare);

    return 0;
    }