#include<stdio.h>
int main(){
    float c,p;
    printf("Enter temperature in Centrigrade: ");
    scanf("%f", &c);
    p=c*(9/5)+32;
    printf("The temperature of %f in farenheit is:%f ", c,p);
    return 0;

}