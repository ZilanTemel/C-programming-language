#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define N 100

bool polidromFun(char string[]){
    int len = strlen(string);
    for(int i = 0; i < len / 2; i++){
        if(string[i] != string[len - i - 1]){
            return false;
        }
    }
    return true;
}

int main (){
    char string[N];
    printf("Please enter the string: ");
    scanf("%s", string);

    if (polidromFun(string)) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }
    
    return 0;
}

