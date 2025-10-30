/*
NAME: BOSIRE KEVIN ONSONGO 
REG NO: PA106/G/29041/25
DESCRIPTION: ROOM_OCCUPANCE
*/
#include <stdio.h>

int main() {
    int occupancy[5][10] = {
        {1,0,1,1,0,1,1,0,1,0},
        {1,1,1,0,0,1,0,1,0,1},
        {0,1,0,1,1,0,0,1,1,1},
        {1,0,1,0,1,1,0,1,0,1},
        {0,1,0,0,1,0,1,1,1,0}
    }; // hardcoded data

    for(int floor = 0; floor < 5; floor++) {
        int occupied = 0, vacant = 0;
        for(int room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d - Occupied: %d, Vacant: %d\n", floor+1, occupied, vacant);
    }

    return 0;
}
