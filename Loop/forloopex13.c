// Print the GP - 100,50,25.. upto ‘n’ terms
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    float a=100;
    for (int i = 0; i <=n; i++)
    {
        printf("% 0.2f ", a);
        a=a / 2;
    }
    
    return 0;
}