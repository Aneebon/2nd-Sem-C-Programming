#include<stdio.h>
int main(){
    int n,f,l;
    printf("Enter the 6-digit number: ");
    scanf("%d", &n);
    f = n/100000;
    l = n%10;
    int sum = f + l;
    printf("Sum is:%d ", sum);
    return 0;
}