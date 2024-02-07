// Author: MD. KARIF HASAN
// Author URL: https://kar1f.github.io/

#include "stdio.h"

int main ()
{
    int i=1,n;
    printf("\nEnter n : ");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i%2==0)
        {
            printf("\n%d even no",i);

        } else{
            printf("\n%d odd no",i);

        }
        i++;
    }

}
