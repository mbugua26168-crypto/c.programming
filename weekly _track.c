/*
Name: Mbugua Ankal
Reg.no:CT100/G/26168/25
Description:A program to track weekly revenue
*/
#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;
    int i;

    // Input revenue for each day
    printf("Enter revenue for each day of the week:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d revenue: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i]; // Add to total
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\n=== Weekly Revenue Summary ===\n");
    printf("Total Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}