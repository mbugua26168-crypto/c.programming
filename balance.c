//simple C program 
/*
Name: Mbugua Ankal 
Reg no:CT100/G/26168/25
Description: to display balance after withdrawal 
*/

#include <stdio.h>//

//main function
int main(){
double balance=5000;
double withdrawal_amount;

printf("your initial account balance is:%.2f",balance);

while(balance>0){
printf ("enter the amount to withdrawal (current balance:%.2f):",balance);
scanf("%lf", & withdrawal_amount);


balance=balance - withdrawal_amount;

  }
  printf("insufficient balance:%.2f\n",balance);
  
  return 0;
}