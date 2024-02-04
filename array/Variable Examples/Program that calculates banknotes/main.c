#include <stdio.h>
#include <stdlib.h>


int main() {
	int amount,hundredNotes,fiftyNotes,twentyNotes,tenNotes;
	
	printf("enter the amount money (Multiples of ten)");
	scanf("%d",&amount);
	
	if (amount%10==0){
		
		hundredNotes=amount/100;
		fiftyNotes=(amount%100)/50;
		twentyNotes=((amount%100)%50)/20;
		tenNotes=(((amount%100)%50)%20)/10;
		printf("%d \n %d \n %d \n %d",hundredNotes,fiftyNotes,twentyNotes,tenNotes);
		
		
	}
		
	else {
			printf("invalid input.Please enter multiples of 10 .\n");
			
	}
	
	return 0;
}
