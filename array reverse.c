// Author: MD. KARIF HASAN
// Author URL: https://kar1f.github.io/
// WAP Arrays IN REVERSE

#include <stdio.h>


int main(){
    int a[100],n,i;
    printf("\n Number of STUDENT  :");
    scanf("%d",&n);
    printf("\n ENTER THE ROLL NUMBER:");
    for (int i = 1; i < n; i++) {

        printf("\na[%d] :",i);
        scanf("%d",&a[i]);

    }

    printf("\n Entered array elements are:");
    for (int i = n-1; i >= 0;i--) {
        printf("\na[%d] : ",i);
        printf("%d",a[i]);

    }



}

