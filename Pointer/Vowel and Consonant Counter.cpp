#include <stdio.h>
# define N 100

int main() {
    char str[N], *ptr; 
    int vowel=0, consonant=0; 

    printf(" Please enter the Input ");
    fgets(str, sizeof str, stdin); 

    
    ptr = str;
    
    while (*ptr != '\0') {
        
        if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr<= 'z')) {
         
            if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' ||
                *ptr== 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
                vowel++;
            } else {
                consonant++; 
            }
        }
        ptr++; 
    }
    printf(" Number of vowels : %d\n Number of consonants : %d\n", vowel, consonant);

    return 0;
}

