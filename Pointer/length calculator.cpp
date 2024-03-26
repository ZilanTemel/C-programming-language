#include <stdio.h>

int lengthCalculator(char* chracter);

int main() {
    char str1[100];
    int length;
    printf("please enter the string: ");
    fgets(str1, sizeof(str1), stdin); 
    length = lengthCalculator(str1);
    printf("the length of string is: %d ", length);
    return 0;
}
int lengthCalculator(char* character) {
    int counter = 0;
    while (*character != '\0' && *character != '\n') { 
        if (*character != ' ') { 
            counter++;
        }
        character++;
    }
    return counter;
}

