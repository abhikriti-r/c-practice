// to calculate volume of cylinder
#include <stdio.h>
int main(){
    int r,h;
    printf("Enter the radius: ");
    scanf("%d", &r);
    printf("Enter height of cylinder:");
    scanf("%d", &h);
    printf("The volume of cylinder with radius %d and height %d is %f", r,h,3.14*r*r*h);
    return 0;
}