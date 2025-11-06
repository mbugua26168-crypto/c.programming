/*
Name: Mbugua Anka 
Reg.no:CT100/G/26168*25
Desciption: c program to store student examination results 
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;

    file = fopen("results.dat", "wb");
    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); 

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        fgets(s.name, sizeof(s.name), stdin);

        printf("Enter registration number: ");
        fgets(s.regNo, sizeof(s.regNo), stdin);

        printf("Enter total marks: ");
        scanf("%f", &s.totalMarks);
        getchar();

        fwrite(&s, sizeof(struct Student), 1, file);
    }

    fclose(file);
    printf("Records saved to results.dat successfully.\n");
    return 0;
}
