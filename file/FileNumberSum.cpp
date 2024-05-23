#include <stdio.h>
#include <stdlib.h>

void sumNumbers() {
    FILE *file;
    int number, total = 0;

    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        return;
    }

    while (!feof(file)) {
        fscanf(file, "%d", &number);
        total += number;
    }

   
    fclose(file);
    printf("Sum of numbers: %d\n", total);
}


int main() {
    FILE *file;
    int number;

    file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("File could not be opened!\n");
        return 1;
    }

    printf("Enter numbers (enter -1 to exit the program):\n");
    while (1) {
        printf("Number: ");
        scanf("%d", &number);
        if (number == -1) {
            break;
        }
        fprintf(file, "%d\n", number);
    }

    
    fclose(file);
    printf("Numbers have been written to the file.\n");

    
    sumNumbers();

    return 0;
}

