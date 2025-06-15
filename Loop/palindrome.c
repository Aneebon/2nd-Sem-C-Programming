#include<stdio.h>
int main(){
    int n,a,reverse=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i>0; i/=10)
    {
        a = i%10;
        reverse = reverse*10+a;
    }
    if (reverse==n)
    {
        printf("This is Palindrome");
    }
    else
    {
        printf("This is not palindrome");
    }
    return 0;
}