/*
Name: Mbugua Anka 
Reg.no:CT100/G/26168/25
Description:A program for hotel occupancy
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];   // 3 branches, 5 floors, 10 rooms per floor
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0)); // Seed the random number generator

    // Assign random occupancy and count occupied rooms
    for(branch = 0; branch < 3; branch++) {
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 0 = vacant, 1 = occupied

                if(chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Output total occupied rooms
    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
  }