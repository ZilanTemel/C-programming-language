#include <stdio.h>
#include <stdlib.h>


int main() {
    float fahrenheit, celsius;

    printf("Enter the Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Equivalent temperature in Celsius: %.2f\n", celsius);

    return 0;
}

