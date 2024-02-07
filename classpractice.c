// Author: MD. KARIF HASAN
// Author URL: https://kar1f.github.io/

#include "stdio.h"

int main ()
{
    int i=1,n,sum=0;
    printf("\n enter the number");
    scanf("%d",&n);
    while (i<=n)
    {
        sum=sum+i;
        i++;

    }
    printf("\n sum of n number is %d",sum);

}
