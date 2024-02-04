#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int number1, number2, sum;
	
	printf("Enter the first number: ");
	scanf("%d", &number1);
	
	printf("Enter the second number: ");
	scanf("%d", &number2);
	
	sum = number1 + number2;
	
	printf("Sum of the two numbers: %d\n", sum);
	
	return 0;
}

