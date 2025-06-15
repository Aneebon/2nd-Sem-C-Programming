#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);
    printf("Before swapping num1 = %d and num2 = %d\n", a,b);
    c = b;
    b = a;
    printf("After swapping num1 = %d and num2 = %d", c, b);
    return 0;
}