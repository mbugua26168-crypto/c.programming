/*
Name:Mbugua Anka
Reg.no:CT100/G/26168/25
Description:A program to guess number
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(0));

    
    secretNumber = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20.\n");

    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;  

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it right.\n");
            printf("It took you %d attempt(s).\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}
