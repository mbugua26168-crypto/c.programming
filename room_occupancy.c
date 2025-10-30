/*
Name: Mbugua Anka 
Reg.no:CT100/G/26168/25
Description:A program for room occupancy
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int i, j;
    
    // Seed for random numbers
    srand(time(0));

    // Fill array with random 0s and 1s
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;  // 0 or 1
        }
    }

    printf("Room Occupancy Report (1 = Occupied, 0 = Vacant)\n\n");

    // Display occupancy report per floor
    for(i = 0; i < 5; i++) {
        int occupied = 0, vacant = 0;

        for(j = 0; j < 10; j++) {
            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d: Occupied = %d rooms, Vacant = %d rooms\n", 
                i + 1, occupied, vacant);
    }

    return 0;
}