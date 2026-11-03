// celsius to fahrenheit 
#include <stdio.h>
int main(){
    float temp;
    printf("Enter temperature in celsius: ");
    scanf("%f" , &temp);
    printf("The value of %f celsius in Fahrenheit is %f", temp, (9/5)*temp+32);
    return 0;
}