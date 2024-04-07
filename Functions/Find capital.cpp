#include <stdio.h>
#include <string.h>
#define N 100

char findCapital(char *);

int main() {
    char str[N], letter;

    printf("Input a string to including one or more capital letters : ");
    scanf("%s", str);
    letter = findCapital(str);
    if (letter == 0) {
        printf("There is no capital letter in the string: %s.\n", str);
    } else {
        printf("The first capital letter appears in the string %s is %c.\n\n", str, letter);
    }
    return 0;
}

char findCapital(char *str) {
    if (*str == '\0') {
        return 0; 
    }
    if (*str >= 'A' && *str <= 'Z') {
        return *str; 
    }
    return findCapital(str + 1); 
}

