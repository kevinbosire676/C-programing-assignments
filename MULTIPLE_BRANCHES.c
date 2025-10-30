/*
NAME: BOSIRE KEVIN ONSONGO 
REG NO: PA106/G/29041/25
DESCRIPTION: Multiple_Branches
*/
#include <stdio.h>

int main() {
    int chain[3][5][10] = {
        {// Branch 1
            {1,0,1,0,1,0,1,0,1,0},
            {1,1,0,0,1,0,0,1,0,1},
            {0,1,1,1,0,1,1,0,1,0},
            {1,0,0,1,0,1,0,0,1,1},
            {1,1,0,0,1,1,0,1,0,1}
        },
        {// Branch 2
            {0,1,0,1,0,1,0,1,0,1},
            {1,0,1,0,1,0,1,0,1,0},
            {1,1,1,0,0,1,0,1,1,0},
            {0,0,1,1,0,0,1,0,1,1},
            {1,1,0,1,0,1,1,0,1,0}
        },
        {// Branch 3
            {0,0,0,1,1,1,1,0,1,1},
            {1,1,0,0,1,1,0,0,1,1},
            {0,1,1,1,0,0,1,1,0,1},
            {1,1,0,1,0,1,1,0,0,1},
            {0,1,0,1,1,1,1,0,1,0}
        }
    }; // hardcoded data

    int totalOccupied = 0;

    for(int branch = 0; branch < 3; branch++)
        for(int floor = 0; floor < 5; floor++)
            for(int room = 0; room < 10; room++)
                if(chain[branch][floor][room] == 1)
                    totalOccupied++;

    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}

