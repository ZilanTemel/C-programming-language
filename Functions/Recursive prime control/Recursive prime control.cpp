<<<<<<< Updated upstream
#include<stdio.h>

int primeControl(int);
int i;

int main()
{

    int n1,primeNo;
	
    printf(" Please enter the number : ");
    scanf("%d",&n1);
    
    i = n1/2;

    primeNo = PrimeControl(n1);

   if(primeNo==1)
        printf(" The number %d is a prime number. \n\n",n1);
   else
      printf(" The number %d is not a prime number. \n\n",n1);
   return 0;
}

int PrimeControl(int n1)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i--;
         PrimeControl(n1);
      }
}

=======
#include<stdio.h>

int primeControl(int);
int i;

int main()
{

    int n1,primeNo;
	
    printf(" Please enter the number : ");
    scanf("%d",&n1);
    
    i = n1/2;

    primeNo = PrimeControl(n1);

   if(primeNo==1)
        printf(" The number %d is a prime number. \n\n",n1);
   else
      printf(" The number %d is not a prime number. \n\n",n1);
   return 0;
}

int PrimeControl(int n1)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i--;
         PrimeControl(n1);
      }
}

>>>>>>> Stashed changes
