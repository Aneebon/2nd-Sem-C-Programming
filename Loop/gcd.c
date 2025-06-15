#include<stdio.h>
int main(){
    int a,b,gcd;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    gcd=b;
    printf("The gcd is %d",gcd);
    
    return 0;
}