/*
Name: Mbugua Anka
Reg:CT100/G/26168/25
Dep:C program to check if a student is eligible for exams 
*/

#include<stdio.h>

int main () {
    float average_marks;
    int attendance;
    
    printf("Enter your attendance:");
    scanf("%d", &attendance);
    
    printf ("Enter your average_marks:");
    scanf("%f", &average_marks);
    
    if(attendance >=75&& average_marks >= 40)
      printf("eligible for exams /n");
    else
     printf("Not eligible for exams /n");
    
    return 0;
}
