// To calculate simple interest
#include <stdio.h>
int main(){
    int P,r,t;
    printf("Enter the principle amount:");
    scanf("%d", &P);
    printf("Enter rate:");
    scanf("%d", &r);
    printf("Enter tenure:");
    scanf("%d", &t);
    printf("The simple interest on amount %d at the interest rate of %d for a tenure of %d is %d", P,r,t, (P*r*t)/100);
    return 0;
}