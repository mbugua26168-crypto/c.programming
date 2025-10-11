/*
Name:Sombe Jacinta Nduku
Reg.no:CT100/G/26233/25
Description:A program to display the number guessing name
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 20
    secretNumber = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20.\n");

    // Keep asking until the correct number is guessed
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;  // Count each guess

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