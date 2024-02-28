#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	printf("Please enter the number ");
	scanf("%d",&number);
	printf("%d",findbinary(number));
	return 0;

}

int findbinary(int number){

		if (number==0)
		   return 0;
		else 
			return (number%2 + 10*findbinary(number/2));
			
}
