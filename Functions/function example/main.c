#include <stdio.h>


int tsum(int s1, int s2);

int main() {
    int t, n1, n2;

    
    printf("Please enter the first number: ");
    scanf("%d", &n1);

   
    printf("Please enter the second number: ");
    scanf("%d", &n2);

    
    t = sum(n1, n2);

    printf("The sum is: %d", t);

    return 0;
}

int sum(int s1, int s2) {
    int s3;
    s3 = s1 + s2;
    return s3;
}

