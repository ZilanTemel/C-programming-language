#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int x);
int main() 
{
	int n,result;
	printf("please enter the number ");
	scanf("%d",&n);
	result =sumOfDigits(n);
	printf("sum of entered digits are = %d ",result);
	return 0;
}

int sumOfDigits(int x){
	if(x<=0)
	return 0;
	else {
		return x%10 +sumOfDigits(x/10);
	}
} 
