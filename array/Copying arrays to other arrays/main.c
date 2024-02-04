#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array1[10],array2[10];
	int i ;
	for (i=0;i<10;i++)
	array1[i]=i;
	
	for (i=0;i<10;i++) array2[i]=array1[i];
	printf("array1: ");
	for (i=0;i<10;i++) printf("%d " ,array1[i]);
	    printf("\n");
	    
	printf("array2: ") ;
	for(i=0;i<10;i++) printf("%d ",array2[i]);
			return 0;
}
