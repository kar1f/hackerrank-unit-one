// Author: MD. KARIF HASAN
// Author URL: https://kar1f.github.io/
// WAP to display the reverse of a number
#include "stdio.h"

int main(){
    int n, rev =0,rem;
    printf("Enter the integer :");
    scanf("%d",&n);
    while (n !=0)
    {
        rem=n%10;
        rev = rev*10+rem;
        n=n/10;

    }
    printf("Reversed Number = %d",rev );
}
