#include<stdio.h>
int main(){
    int n,original,cube,r=0,a;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    for (; n >0; n/=10)
    {
        a= n % 10;
        cube = a*a*a;
       r+=cube;
    }
    if (r==original)
    {
        printf("The number is Armstrong number");
    }
    else{
        printf("The number is not Armstrong number");
    }
    return 0;
}