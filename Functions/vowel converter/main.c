#include <stdio.h>
#include <string.h>

void replaceWithAsterisk(char array[]);

int main() {
    char input[255];
    printf("Enter your sentence: ");
    gets(input);
    replaceWithAsterisk(input);
    printf("Modified version with asterisks: %s\n", input);

    return 0;
}

void replaceWithAsterisk(char array[]) {
    int i, j;
    char vowels[8] = {'a', 'e', 'ý', 'i', 'u', 'ü', 'o', 'ö'};
    for (i = 0; i < strlen(array); i++) {
        for (j = 0; j < 8; j++) {
            if (array[i] == vowels[j]) {
                array[i] = '*';
            }
        }
    }
}

