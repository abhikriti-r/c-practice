#include <stdio.h>
int main(){
    int r;
    printf("enter the radius:");
    scanf("%d", &r);
    printf("The area of circle with %d is %f",r, 3.14*r*r);
    return 0;
}