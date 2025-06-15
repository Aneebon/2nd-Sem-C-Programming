#include<stdio.h>
int main(){
    int n, r = 0, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n>0; n/=10)
    {
        a== n % 10;
        r = r*10 + a;
    }
    if (r == n)
    {
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }

    return 0;
}