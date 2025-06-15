#include<stdio.h>
int main(){
    int n,a;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i>0; i/=10)
    {
        a = i%10;
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}