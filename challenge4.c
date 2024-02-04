#include "stdio.h"
int main(){
    int a,b,c;
    scanf("%d\n%d\n%d\n",&a,&b,&c);
    int sum = a + b + c;
    double avg = sum /3;
    printf("sum is\n%d\n", sum);
    printf("average is %0.2lf", avg);
    return 0;
}
