// Author: MD. KARIF HASAN
// Author URL: https://kar1f.github.io/
// WAP Factorial  of a number
#include "stdio.h"

int main(){

    int n,fact=1, i;
    printf("Enter the Number :");
    scanf("%d",&n);
    for ( i = 1; i <= n; ++i) {
        fact=fact*i;


    }
    printf("\n Factorial of number %d ",fact);

}
