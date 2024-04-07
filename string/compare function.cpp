#include <stdio.h>
#define N 100 

int compareStrings(char*, char*) ;
int main(void) {
    char str1[N], str2[N]; 

    printf("\nInput the 1st string : ");
    fgets(str1, sizeof str1, stdin); 
    printf("Input the 2nd string : ");
    fgets(str2, sizeof str2, stdin); 
    printf("\nString1: %s", str1); 
    printf("String2: %s", str2); 


    if (compareStrings(str1, str2) == 0) {
        printf("\nStrings are equal.\n");
    } else {
        printf("\nStrings are not equal.\n");
    }

    return 0; 
}
int compareStrings(char* str1, char* str2) {
    
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) { 
            return 1; 
        }
        str1++; 
        str2++; 
    }
    return 0; 
}

