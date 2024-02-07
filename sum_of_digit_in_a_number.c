// Author: MD. KARIF HASAN
// Author URL: https://kar1f.github.io/
// WAP to find the sum of digit in a number
#include "stdio.h"

int main ()
{
    int n,digit, sum=0;
    printf("\n Enter Number :");
    scanf("%d",&n);
    while (n!=0)
    {
        digit=n%10;
        sum=sum+digit;

      n=n/10;

    }
    printf("\n sum of  digits are : %d",sum);

}
