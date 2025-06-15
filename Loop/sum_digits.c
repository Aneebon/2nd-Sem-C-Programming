#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, sum=0, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i>0; i=i/10)
    {
        a = i%10;
        sum+=a;
    }
    printf("The sum of the digits is: %d ", sum );
     
    return 0;
}
