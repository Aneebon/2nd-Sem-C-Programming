#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number=> ");
    scanf("%d", &a);
    printf("Enter 2nd number=> ");
    scanf("%d", &b);
    a = a+b;
    
    printf("After swapping the numbers become %d and %d", a,b);
    return 0;
}