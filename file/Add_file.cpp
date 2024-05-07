#include <stdio.h>

typedef struct {
    int number;
    char name[50];
    float midterm;
    float final;
} student;

int main() {
    int n;
    printf("Please enter the number of students: ");
    scanf("%d", &n);

    FILE *file = fopen("grades.txt", "w");
    if (file == NULL) {
        printf("File could not be created.");
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        student std;
        printf("Enter student number: ");
        scanf("%d", &std.number);
        printf("Enter student name: ");
        scanf("%s", std.name);
        printf("Enter midterm grade: ");
        scanf("%f", &std.midterm);
        printf("Enter final grade: ");
        scanf("%f", &std.final);

        fprintf(file, "%d %s %.2f %.2f\n", std.number, std.name, std.midterm, std.final);
    }

    fclose(file);
    printf("Grades have been successfully saved to the file.\n");
    return 0;
}

