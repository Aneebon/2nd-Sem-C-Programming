#include<stdio.h>
int factorial(int i){
    if (i==1)
    {
        return 1;
    }
    return i* factorial(i-1);
}
int main(){
    int i;
    printf("Enter a number=> ");
    scanf("%d", &i);
    if (i < 0) {
        printf("Invalid input! Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial: %d\n", factorial(i));
    }
    return 0;
}