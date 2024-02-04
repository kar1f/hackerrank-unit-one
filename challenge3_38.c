# include "stdio.h"
int main(){
    const double pi = 3.142;
    int r;
    scanf("%d", &r);
    double area = (pi * r * r);
    printf("Area is\n%0.10g\n", area);
    return 0;
}
