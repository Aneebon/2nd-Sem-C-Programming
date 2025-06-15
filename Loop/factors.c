#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
           printf("%d ", i);
        }
        
    }
    
    return 0;
}
