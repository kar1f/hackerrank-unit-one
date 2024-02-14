// Author: MD. KARIF HASAN
// Author URL: https://kar1f.github.io/
// WAP Arrays

#include <stdio.h>


int main(){
    int a[100],n,i;
    printf("\n Enter the number of elements :");
    scanf("%d",&n);
    printf("\n Enter array elements:");
    for (int i = 0; i < n; i++) {

        printf("\na[%d]...",i);
        scanf("%d",&a[i]);

    }

    printf("\n Entered array elements are:");
    for (int i = 0; i < n;i++) {
        printf("\na[%d].....",i);
        printf("%d",a[i]);

    }



}
