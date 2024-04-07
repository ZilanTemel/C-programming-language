#include <stdio.h>
int lcmCalculator(int , int );
 
int main()
{
    int n1, n2, lcm;
    printf(" Input two number for LCM : ");
    scanf("%d %d", &n1,&n2);
    
    if(n1 >  n2)
        lcm = lcmCalculator(n2, n1);
    else
        lcm = lcmCalculator(n1, n2);
    printf(" The LCM of %d and %d :  %d\n\n", n1, n2, lcm);
    return 0;
}
int lcmCalculator(int n1, int n2)
{
    static int m = 0;
    
    m += n2;

    if((m % n1 == 0) && (m % n2 == 0))
    {
        return m;
    }
    else
    {
        lcmCalculator(n1, n2);
    }
}

