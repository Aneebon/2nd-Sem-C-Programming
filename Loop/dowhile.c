#include<stdio.h>
int main(){
    int n, sum=0;
    do
    {
        
    printf("Enter no.:");
    scanf("%d", &n);
    sum+=n;
    } while (n!=0);
    printf("%d", sum);

    return 0;
}