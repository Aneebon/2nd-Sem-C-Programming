#include<stdio.h>
int main(){
    int a,b;
    printf("Enter number-1: ");
    scanf("%d", &a);
    printf("Enter number-2: ");
    scanf("%d", &b);
    if (a>b)
    {
        printf("The greatest of two numbers is: %d", a);
    }
    else{
        printf("The greatest of two numbers is: %d", b);
    }
    
    return 0;
}