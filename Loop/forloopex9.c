//Printing AP WITHOUT using MATHEMATICAL formula
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    int a=1;
    for (int i = 1; i <= n; i=i+1)
    {
        printf("%d \n", a);
        a=a+2;
    }
    
    return 0;
}
