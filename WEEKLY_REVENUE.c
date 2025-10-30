/*
NAME: BOSIRE KEVIN ONSONGO 
REG NO: PA106/G/29041/25
DESCRIPTION: WEEKLY_REVENUE
*/
#include <stdio.h>

int main() {
    int revenue[7] = {1254,46789,2345,3456,8685,2345,5436};
    int total = 0;
    float average = 0.0;

    for(int i = 0; i < 7; i++) {
        printf("%d\n", revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;

    printf("Total weekly revenue: %d\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}
