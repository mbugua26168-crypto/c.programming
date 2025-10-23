/*
Name: Mbugua Ankal
Reg.no:CT100/G/26168/25
Description:Electric bill
*/

#include <stdio.h>

float calculateElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    } else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    float total = calculateElectricBill(units);
    printf("Total bill = KSh. %.2f\n", total);

    return 0;
}
