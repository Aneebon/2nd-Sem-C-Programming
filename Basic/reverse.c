#include<stdio.h>
int main(){
    int n,a,b,c;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    a = n/100;
    b = (n/10)-(a*10);
    c = n%10;
    printf("The reverse of the number is: %d%d%d",c,b,a);
    return 0;
}