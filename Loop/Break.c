//WAP to check a number is prime or not
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int a=0;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            a=1;
            break;
        }
        
    }
    if(n==1) printf("1 is neither prime nor composite");
    else if (a==0)printf("The given number is prime");
    else printf("The given number is composite");
    
    
    
    return 0;
}
