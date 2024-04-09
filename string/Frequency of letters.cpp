#include <stdio.h>
#define N 100

int main() {
    int index, amountOfLetters[26] = {0}, i;
    char str[N], character, letter;

    printf("Please enter the string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        character = str[i];
        if (character >= 65 && character <= 90) {
            index = character - 65;
            amountOfLetters[index]++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (amountOfLetters[i] > 0) {
            letter = 'A' + i;
            printf("%c: %d\n", letter, amountOfLetters[i]);
        }
    }

    return 0;
}

