// Author:
// Author URL: 

#include "stdio.h"

int main(){
    int principal;
    scanf("%d\n", &principal);
    double rate_of_interest;
    scanf("%lf\n", &rate_of_interest);
    int time;
    scanf("%d\n", &time);
    double simple_interest;
    simple_interest = (principal * time * rate_of_interest) / 100;
    printf("%0.1lf", simple_interest);

    return 0;
}
