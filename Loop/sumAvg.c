#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter number: ");
    for (int i = 1; i <=10; i++)
    {
        scanf("%d", &n);
        sum+=n;
    }
    printf("The average of the numbers entered is: %d", sum);
    return 0;
}