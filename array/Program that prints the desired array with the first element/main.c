#include <stdio.h>
#include <stdlib.h>


int main() {

   int array[5];
   int i;
   
   printf("Enter the number : ");
   scanf("%d", &array[0]);
   
   for (i=1; i<5; i++){
   	array[i]=array[0]+i;
   	
    
   }
   for (i=0;i<5;i++){
   	printf("%d ",array[i]);
   }



	return 0;
}
