#include <stdio.h>

int main() {
    
    int studentNumber;
    float midtermGrade, finalGrade, passingGrade;

    
    printf("Student Number: ");
    scanf("%d", &studentNumber);

    printf("Midterm Grade: ");
    scanf("%f", &midtermGrade);

    printf("Final Grade: ");
    scanf("%f", &finalGrade);
    
    passingGrade = 0.4 * midtermGrade + 0.6 * finalGrade;

    printf("Student Number: %d, Passing Grade: %.2f\n", studentNumber, passingGrade);

    return 0;
}

