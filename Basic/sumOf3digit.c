#include<stdio.h>
int main(){
    int n,a,b,c;
    printf("Enter the 3 digit number: ");
    scanf("%d", &n);
    a=n/100;
    b=(n/10)-(10*a);
    c = n%10;
    int sum = a+b+c;
    printf("Sum of the digits is: %d",sum);
    return 0;
}