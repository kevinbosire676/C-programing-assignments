/*
NAME:BOSIRE KEVIN ONSONGO
REG NO: PA106/G/29041/25
DESCRIPTION:Read Student Records from Binary File
*/
#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct Student {
    char name[50];
    char reg_no[20];
    float total_marks;
};

int main() {
    struct Student s;
    FILE *file;

    // Open the binary file for reading
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open results.dat\n");
        return 1;
    }

    printf(" Student Results:\n");
    printf("----------------------------\n");

    // Read and display each record
    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n", s.total_marks);
        printf("----------------------------\n");
    }

    fclose(file); // Ensure file is closed
    return 0;
}
