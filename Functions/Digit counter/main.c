#include <stdio.h>


void digitCounter(int x);

int main() {
    int n;
    printf("Please input the number: ");
    scanf("%d", &n);
    digitCounter(n);
    return 0;
}
 
int counter = 0;
void digitCounter(int x) {
    if (x <= 0) {
        
        printf("There are %d digit(s).\n", counter);
        return;
    } else {
        counter++;
        digitCounter(x / 10);
    }
}

