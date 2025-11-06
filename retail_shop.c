/*
Name: Mbugua Anka 
Reg.no:CT100/G/26168*25
Desciption: c program to store total transaction for a retail shop
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0;
    int n, i;
    
    file = fopen("sales.txt", "w");
    if (file == NULL) {
        printf("Error creating the file.\n");
        return 1;
    }

    printf("Enter number of transactions: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter amount for transaction %d: ", i + 1);
        scanf("%f", &amount);
        fprintf(file, "%.2f\n", amount);
    }

    fclose(file);

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    printf("Total sales for the day: %.2f\n", total);

    return 0;
}
