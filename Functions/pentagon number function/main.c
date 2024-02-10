#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i,j;
	printf("pentagon numbers: ");
	
	
	for(i=1; ;i++) {
	
	j=i*(3*i-1)/2;
	  if(j>=100){
	  	break;
	  }
		printf("%d ", j);
	}
		
		
		
		
	return 0;
		
}
