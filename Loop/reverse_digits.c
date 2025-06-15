#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,r = 0, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n !=0; n/=10)
    {
        a = n%10;
        r = r*10+a;
    }
    printf("The reverse of the number is: %d ", r);
    return 0;
}
