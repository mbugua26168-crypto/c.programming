/*
Name: Mbugua Anka 
Reg.no:CT100/G/26168*25
Desciption: c program for borrowed_books
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin); 
    
    fprintf(file, "%s", title);
    fclose(file);

    printf("Book title successfully stored.\n");
    return 0;
}