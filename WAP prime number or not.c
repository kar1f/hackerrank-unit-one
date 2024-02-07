// Author: MD. KARIF HASAN
// Author URL: https://kar1f.github.io/
// WAP prime number or not
#include "stdio.h"

int main(){
    int n,i,cout=0;

    printf("Enter the Number :");
    scanf("%d",&n);
    for ( i = 1; i <=n ; ++i) {
        if (n%i==0)

        {
            cout++;

        }
    }
    if (cout==2)
    {
        printf("\n it is prime");

    }

        else
    {
        printf("\n not a prime");
    }





}
