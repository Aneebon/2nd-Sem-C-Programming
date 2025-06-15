#include<stdio.h>
int main()
{
    int n, sum=0;
    float a;
    printf("Enter 10 numbers: ");
    for (int i = 1; i <= 10; i++)
    {
        
        scanf("%d", &n);
        sum+=n;
    }
        
        a = sum/10.0;

printf("The sum of the numbers is %d and the average of the numbers is %0.2f", sum, a);
    
    return 0;
}
