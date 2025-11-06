/*
NAME:BOSIRE KEVIN ONSONGO
REG NO: PA106/G/29041/25
DESCRIPTION:LIBRARY BOOKS
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char title[100];
    FILE *file;

    // Open the file in append mode so existing records are preserved
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Prompt the librarian to enter a book title
    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);

    // Write the title to the file
    fprintf(file, "%s", title);
    fclose(file);

    // Confirmation message
    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}
