#include <stdio.h>
#include <stdlib.h>
int f(int n );


int main() {
	int n ;
	printf(" Please enter the number ");
	scanf("%d" ,&n);
	f(n);
	
	
	
	return 0;
}

int f(int n ){
	if (n==0){
		return 0;
	}
	f(n-1);
	printf("%d\n",n);
	
}
