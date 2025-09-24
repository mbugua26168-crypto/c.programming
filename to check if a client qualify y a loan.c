/*
Name: Mbugua Anka
Reg:CT100/G/26168/25
Dep:C program to compute where a client qualifies for a loan
*/

#include<stdio.h>

int main () {
    float annual_income;
    int age;
    
    printf("Enter your age:");
    scanf("%d", &age);
    
    printf ("Enter your annual _income:");
    scanf("%f", &annual_income);
    
    if( age >= 21 && annual_income >= 21000)
      printf("Congratulations you qualify for the loan /n");
    else
     printf("Unfortunately, we are unable to offer you a loan at this limit /n");
    
    return 0;
}