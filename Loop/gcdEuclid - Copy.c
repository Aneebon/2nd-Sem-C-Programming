#include<stdio.h>
int main(){
    int a,b,gcd;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    while (a!=b)
    {
        if (a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    gcd = b;
    printf("%d",gcd);
    
    return 0;
}