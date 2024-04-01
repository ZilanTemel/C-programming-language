#include <stdio.h>
 
 int CalcuOfPower(int x,int y)
{
    int result=1;
    if(y == 0) return result;
    result=x*(CalcuOfPower(x,y-1));  
}
int main()
{
    int n,pwr;
    int result;
     
    printf(" Please enter the base  value : ");
    scanf("%d",&n);
     
    printf(" Please enter the value of power : ");
    scanf("%d",&pwr);
     
    result=CalcuOfPower(n,pwr);
     
    printf(" The value of %d to the power of %d is : %d\n\n",n,pwr,result);
     
    return 0;
}

