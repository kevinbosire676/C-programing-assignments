/*
NAME:BOSIRE KEVIN ONSONGO
REG NO: PA106/G/29041/25
DESCRIPTION:Calculate Total Sales from Text File
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // Open the file for reading
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    // Read each transaction and accumulate total
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file); // Ensure file is closed

    // Display total sales
    printf("Total Sales for the Day: %.2f\n", total);
    return 0;
}
