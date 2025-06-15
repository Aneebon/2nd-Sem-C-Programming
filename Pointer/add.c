#include<stdio.h>
int main(){
    int a,b;
    printf("Enter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);
    int *x;
    int *y;
    x = &a;//This will point to a
    y = &b;// This will point to b 
    printf("Sum of a and b is: %d", *x+*y);
    return 0;
}