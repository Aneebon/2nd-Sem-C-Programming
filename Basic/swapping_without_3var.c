#include<stdio.h>
int main(){
    int a,b;
    printf("Enter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);
    printf("Before swapping the value of num1 = %d and num2 = %d\n", a,b);
    a= a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the value of num1 = %d and num2 = %d", a,b);
    return 0;
}