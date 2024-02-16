
#include <stdio.h>

void lastLetters(char array[]);
int arrayLength(char array[]);

int main(void) {
    
    char sentence[150] = {"Sample sentences "};
    
    printf("Last letters of words in the sentence: ");
    lastLetters(sentence);

    return 0;
}

void lastLetters(char array[]) {
    int i, length;
    length = arrayLength(array);
    
    
    for (i = 0; i < length; i++) {
        
        if (array[i] == ' ') {

            printf("%c", array[i - 1]);
        }
    }
    printf("\n");
}

int arrayLength(char array[]) {
    int i;
    for (i = 0; array[i] != '\0'; i++) {
        
    }
    return i;
}
