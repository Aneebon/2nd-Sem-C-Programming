#include<stdio.h>
int sum(int n){
    if (n==0)
    {
        return 0;
    }
        return n+ sum(n-1);
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d", sum(a));
    return 0;
}