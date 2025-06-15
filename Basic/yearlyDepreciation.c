#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Purchase price: ");
    scanf("%d", &a);
    printf("Enter the years of service: ");
    scanf("%d", &b);
    printf("Enter the annual depreciation: ");
    scanf("%d", &c);
    float d = a - (c*b);
    printf("He Salvage value of an item is: %f", d);
    return 0;
}